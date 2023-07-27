#include "LMS.h"

LMS::LMS(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
	ui.stackedWidget->setCurrentWidget(ui.loginPage);
	this->setFixedSize(QSize(717, 388));

	try {	//connecting with database
		driver = get_driver_instance();
		connection = driver->connect(server, username, password);
	}
	catch (sql::SQLException e) {
		std::cout << "Could not connect to server. Error message: " << e.what() << std::endl;
		system("pause");
		exit(1);
	}
	connection->setSchema("lms");

	//setting default stylesheet
	QFile* styleSheet = nullptr;
	styleSheet = new QFile("StyleSheets/Diffnes.qss");
	styleSheet->open(QFile::ReadOnly);
	QString styleSheetString = QLatin1String(styleSheet->readAll());
	this->setStyleSheet(styleSheetString);

	//ui.logInButton->setStyleSheet(QString("#%1 { background-color: #F50057; }").arg(ui.logInButton->objectName()));
    
	//connect slots
    //main page
	QObject::connect(ui.logInButton, &QPushButton::clicked, this, &LMS::onlogInButtonClick);
	QObject::connect(ui.logOutButton_main, &QPushButton::clicked, this, &LMS::onLogOutButtonClick);
	QObject::connect(ui.searchUserButton_main, &QPushButton::clicked, this, &LMS::onSearchUserButtonMainClick);
	QObject::connect(ui.searchBookButton_main, &QPushButton::clicked, this, &LMS::onSearchBookMainButtonClick);
	QObject::connect(ui.addUserButton_main, &QPushButton::clicked, this, &LMS::onAddUserButtonMainClick);

	//book details page
	QObject::connect(ui.searchButton_Bdetail, &QPushButton::clicked, this, &LMS::onSearchButtonBdetailClick);
	QObject::connect(ui.removeButton_Bdetail, &QPushButton::clicked, this, &LMS::onRemoveButtonBdetailClick);

	//user details page
	QObject::connect(ui.deleteUserButton_Udetail, &QPushButton::clicked, this, &LMS::onDeleteUserButtonUdetailClick);
	QObject::connect(ui.updateUserButton_Udetail, &QPushButton::clicked, this, &LMS::onUpdateUserButtonUdetailClick);

	//update user details page
	QObject::connect(ui.discardButton_UpdateUser, &QPushButton::clicked, this, &LMS::onDiscardButtonUpdateUserClick);
	QObject::connect(ui.saveButton_UpdateUser, &QPushButton::clicked, this, &LMS::onSaveButtonUpdateUserClick);
	QObject::connect(ui.homeButtonAllUserDetails, &QPushButton::clicked, this, &LMS::onHomeButtonClick);

	//add user page
	QObject::connect(ui.saveButton_AddUser, &QPushButton::clicked, this, &LMS::onSaveButtonAddUserClick);
	QObject::connect(ui.discardButton_AddUser, &QPushButton::clicked, this, &LMS::onDiscardButtonAddUserClick);

	//connecting all home buttons
	QObject::connect(ui.homeButton_Udetail, &QPushButton::clicked, this, &LMS::onHomeButtonClick);
	QObject::connect(ui.homeButton_Bdetail, &QPushButton::clicked, this, &LMS::onHomeButtonClick);


	//connecting theme select combobox
	QObject::connect(ui.themeSelectComboBox, &QComboBox::currentIndexChanged, this, &LMS::themeSelectChanged);

}

LMS::~LMS() {
	connection->close();
}

void LMS::onHomeButtonClick() {
	ui.stackedWidget->setCurrentWidget(ui.mainPage);
}

void LMS::themeSelectChanged(int index) {
	//index is the current active index or selected text index
	QFile* styleSheet = nullptr;

	if (index == 0)
		styleSheet = new QFile("StyleSheets/Diffnes.qss");
	else if (index == 1)
		styleSheet = new QFile("StyleSheets/Combinear.qss");
	else if (index == 2)
		styleSheet = new QFile("StyleSheets/Adaptic.qss");

	styleSheet->open(QFile::ReadOnly);
	QString styleSheetString = QLatin1String(styleSheet->readAll());
	this->setStyleSheet(styleSheetString);

}

void LMS::onlogInButtonClick() {
	//sql::PreparedStatement* pstmt = nullptr;
	//sql::ResultSet* result = nullptr;

	//std::string userName = ui.userName->text().toLocal8Bit().constData();
	//std::string password = ui.passWord->text().toLocal8Bit().constData();
	//std::string enteredPassw = "";
	//std::string query = "select password from auth where staffId = ?"; //use ? in place of params

	//pstmt = connection->prepareStatement(query);
	//pstmt->setString(1, userName.c_str());	//add parameter to query
	//result = pstmt->executeQuery();
	//
	//if (result->next())
	//	enteredPassw = result->getString(1).c_str();

	//if ((!enteredPassw.empty()) && password.compare(enteredPassw) == 0) {
	//	//log in successfull
	//	ui.stackedWidget->setCurrentWidget(ui.mainPage);
	//}

	ui.stackedWidget->setCurrentWidget(ui.mainPage);
}

void LMS::onLogOutButtonClick() {
	ui.stackedWidget->setCurrentWidget(ui.loginPage);
}

void LMS::onSearchUserButtonMainClick() {
	sql::PreparedStatement* pstmt = nullptr;
	sql::ResultSet* result = nullptr;

	std::string userName, phoneNum, email;
	std::string userId = ui.searchUserBar_main->text().toLocal8Bit().constData();
	
	//iff used All in search bar
	if (userId == "All") {
		ui.stackedWidget->setCurrentWidget(ui.allUserDetailsPage);
		updateAllUserDetailsPage();
		return;
	}

	//when userId is used
	currentUserId = userId;
	std::string query = "select name, phone_number, email from member where MemberId = ?";
	pstmt = connection->prepareStatement(query);
	pstmt->setString(1, userId.c_str());	//add parameter to query
	result = pstmt->executeQuery();
	//userId = "";
	while (result->next()) {
		userName = result->getString(1);
		phoneNum = result->getString(2);
		email = result->getString(3);
	}
	
	/////////loading the reserve table for the user
	ui.bookTable_Udetail->setRowCount(0);
	QStringList rowHeads;
	rowHeads << "BookId" << "ISBN" << "Title" << "Author";
	ui.bookTable_Udetail->setHorizontalHeaderLabels(rowHeads);
	ui.bookTable_Udetail->setColumnWidth(0, 60);
	ui.bookTable_Udetail->setColumnWidth(1, 80);
	ui.bookTable_Udetail->setColumnWidth(2, 135);
	ui.bookTable_Udetail->setColumnWidth(3, 100);

	query = "select books.BookId, ISBN, Title, Author from books, reserve where books.BookId = reserve.BookId and reserve.MemberId = ?";
	try {
		pstmt = connection->prepareStatement(query);
		pstmt->setString(1, userId.c_str());	//add parameter to query
		result = pstmt->executeQuery();

		int i = 0;
		while (result->next()) {
			ui.bookTable_Udetail->insertRow(i);
			for (int e = 1; e <= 4; e++) {	//for 4 column items
				QTableWidgetItem* item = new QTableWidgetItem(result->getString(e).c_str());
				item->setFlags(item->flags() ^ Qt::ItemIsEditable);
				ui.bookTable_Udetail->setItem(i, e - 1, item);
			}
			i++;
		}
	}
	catch (sql::SQLException e) {
		std::cout << "Error while executing query. Message: " << e.what();
	}
	
	pstmt->close();
	result->close();
	//change to user details page
	if (userName.empty())
		return;
	ui.stackedWidget->setCurrentWidget(ui.userDetailPage);
	//set page data
	ui.name_Udetail->setText(userName.c_str());
	ui.phone_Udetail->setText(phoneNum.c_str());
	ui.email_Udetail->setText(email.c_str());
}

void LMS::updateAllUserDetailsPage() {
	sql::PreparedStatement* pstmt = nullptr;
	sql::ResultSet* result = nullptr;
	std::string userName, phoneNum, email;
	std::string query = "select * from Member";

	//initialize all user detials table
	ui.allUsersDetailsTable->setRowCount(0);
	QStringList rowHeads;
	rowHeads << "Member-ID" << "Name" << "Phone" << "Email";
	ui.allUsersDetailsTable->setHorizontalHeaderLabels(rowHeads);
	ui.allUsersDetailsTable->setColumnWidth(0, 90);
	ui.allUsersDetailsTable->setColumnWidth(1, 150);
	ui.allUsersDetailsTable->setColumnWidth(2, 160);
	ui.allUsersDetailsTable->setColumnWidth(3, 270);

	try {
		pstmt = connection->prepareStatement(query);
		result = pstmt->executeQuery();
		int rowNum = 0;
		while (result->next()) {
			ui.allUsersDetailsTable->insertRow(rowNum);
			for (int e = 1; e <= 4; e++) {	//for 4 column items
				QTableWidgetItem* item = new QTableWidgetItem(result->getString(e).c_str());
				item->setFlags(item->flags() ^ Qt::ItemIsEditable);
				ui.allUsersDetailsTable->setItem(rowNum, e - 1, item);
			}
			rowNum++;
		}
	}
	catch (sql::SQLException e) {
		std::cout << "Error while executing query. Message: " << e.what();
	}
	pstmt->close();
	result->close();
}

void LMS::onSearchBookMainButtonClick() {
	ui.stackedWidget->setCurrentWidget(ui.bookDetailPage);
}

void LMS::onAddUserButtonMainClick() {
	ui.stackedWidget->setCurrentWidget(ui.addUserPage);
}

void LMS::onDeleteUserButtonUdetailClick() {
	QMessageBox::StandardButton reply;
	reply = QMessageBox::warning(this, "Delete", "Do you want to delete the user ?",
		QMessageBox::Ok | QMessageBox::Cancel);
	
	if (reply == QMessageBox::Ok) { //prooced to delete
		sql::PreparedStatement* pstmt = nullptr;
		sql::ResultSet* result = nullptr;
		//currentUserId
		std::string query_1 = "delete from member where MemberId = '" + currentUserId + "'";
		std::string query_2 = "delete from reserve where MemberId = '" + currentUserId + "'";

		try {
			pstmt = connection->prepareStatement(query_1);
			result = pstmt->executeQuery();
			pstmt = connection->prepareStatement(query_2);
			result = pstmt->executeQuery();
		}
		catch (sql::SQLException e) {
			std::cout << "Error while executing query. Message: " << e.what();
		}
		pstmt->close();
		result->close();
		QMessageBox::information(this, tr("LMS"), tr("User Deleted"));
		ui.stackedWidget->setCurrentWidget(ui.mainPage);	//go to main page
	}
	else if (reply == QMessageBox::Cancel) {
		return;
	}
}

void LMS::onUpdateUserButtonUdetailClick() {
	ui.stackedWidget->setCurrentWidget(ui.updateUserPage);
}

void LMS::onDiscardButtonUpdateUserClick() {
	ui.stackedWidget->setCurrentWidget(ui.userDetailPage);
}

void LMS::onSaveButtonUpdateUserClick() {
	sql::PreparedStatement* pstmt = nullptr;
	sql::ResultSet* result = nullptr;
	bool flag = false;

	std::string newName = ui.newNameLineEdit->text().toLocal8Bit().constData();
	std::string newEmail = ui.newEmailLineEdit->text().toLocal8Bit().constData();
	std::string newPhone = ui.newPhoneLineEdit->text().toLocal8Bit().constData();
	std::string newAddress = ui.newAddressLineEdit->text().toLocal8Bit().constData();

	std::string query = "update Member set Name = ?, Phone_Number = ?, Email = ? where MemberId = " + currentUserId;

	try {
		pstmt = connection->prepareStatement(query);
		pstmt->setString(1, newName.c_str());
		pstmt->setString(2, newPhone.c_str());
		pstmt->setString(3, newEmail.c_str());
		result = pstmt->executeQuery();
		flag = true;
	}
	catch (sql::SQLException e) {
		std::cout << "Error while executing query. Message: " << e.what();
		flag = false;
	}
	pstmt->close();
	result->close();
	if (flag) QMessageBox::information(this, tr("LMS"), tr("User Updated"));	//creating a pop-up information
	ui.stackedWidget->setCurrentWidget(ui.mainPage);
}

void LMS::onSaveButtonAddUserClick() {
	sql::PreparedStatement* pstmt = nullptr;
	sql::ResultSet* result = nullptr;
	bool flag = false;

	std::string newName = ui.nameLineEdit->text().toLocal8Bit().constData();
	std::string newEmail = ui.emailLineEdit->text().toLocal8Bit().constData();
	std::string newPhone = ui.phoneLineEdit->text().toLocal8Bit().constData();
	std::string newAddress = ui.addressLineEdit->text().toLocal8Bit().constData();

	std::string query = "insert into Member (Name, Phone_Number, Email) VALUES (?, ?, ?)";
	try {
		pstmt = connection->prepareStatement(query);
		pstmt->setString(1, newName.c_str());
		pstmt->setString(2, newPhone.c_str());
		pstmt->setString(3, newEmail.c_str());
		result = pstmt->executeQuery();
		flag = true;
	}
	catch (sql::SQLException e) {
		std::cout << "Error while executing query. Message: " << e.what();
		flag = false;
	}
	pstmt->close();
	result->close();
	if (flag) QMessageBox::information(this, tr("LMS"), tr("Member Added"));	//creating a pop-up information
	ui.stackedWidget->setCurrentWidget(ui.mainPage);
}

void LMS::onDiscardButtonAddUserClick() {
	QMessageBox::StandardButton reply;
	reply = QMessageBox::warning(this, "Discard", "Discard all changes ?",
		QMessageBox::Ok | QMessageBox::Cancel);
	
	if (reply == QMessageBox::Ok) { //prooced to discard
		ui.stackedWidget->setCurrentWidget(ui.mainPage);	//go to main page
	}
	else if (reply == QMessageBox::Cancel) {
		return;
	}

}

void LMS::onSearchButtonBdetailClick() {
	sql::PreparedStatement* pstmt = nullptr;
	sql::ResultSet* result = nullptr;

	std::string title = ui.searchBar_Bdetail->text().toLocal8Bit().constData();
	std::string query = "select * from books where title like '%" + title + "%'";

	//clear the existing table
	ui.bookTable_Bdetail->setRowCount(0);
	QStringList rowHeads;
	rowHeads << "BookId" << "ISBN" << "Title" << "Author";
	ui.bookTable_Bdetail->setHorizontalHeaderLabels(rowHeads);
	ui.bookTable_Bdetail->setColumnWidth(0, 60);
	ui.bookTable_Bdetail->setColumnWidth(1, 100);
	ui.bookTable_Bdetail->setColumnWidth(2, 200);
	ui.bookTable_Bdetail->setColumnWidth(3, 150);

	try {
		pstmt = connection->prepareStatement(query);
		result = pstmt->executeQuery();
		int i = 0;
		while (result->next()) {
			ui.bookTable_Bdetail->insertRow(i);
			for (int e = 1; e <= 4; e++) {	//for 4 column items
				QTableWidgetItem* item = new QTableWidgetItem(result->getString(e).c_str());
				item->setFlags(item->flags() ^ Qt::ItemIsEditable);
				ui.bookTable_Bdetail->setItem(i, e-1, item);
			}
			i++;
		}
	}
	catch (sql::SQLException e) {
		std::cout << "Error while executing query. Message: " << e.what();
	}
	pstmt->close();
	result->close();
}

void LMS::onRemoveButtonBdetailClick() {
	sql::PreparedStatement* pstmt = nullptr;
	sql::ResultSet* result = nullptr;
	std::string bookId;
	bool flag = false;

	QModelIndexList selection = ui.bookTable_Bdetail->selectionModel()->selectedRows();
	if (selection.count() != 0) {	//finding the first selected row
		QModelIndex index = selection.at(0);
		//qDebug() << index.row();	//it's the first selected row
		QVariant x = index.sibling(index.row(), 0).data();
		QString y = x.toString();
		//qDebug() << y;
		bookId = y.toLocal8Bit().constData();
		flag = true;
	}

	std::string query = "delete from books where bookId = '" + bookId + "'";
	try {
		pstmt = connection->prepareStatement(query);
		result = pstmt->executeQuery();
	}
	catch (sql::SQLException e) {
		std::cout << "Error while executing query. Message: " << e.what();
	}
	pstmt->close();
	result->close();

	onSearchButtonBdetailClick();	//call this to refresh the table
	if(flag) QMessageBox::information(this, tr("LMS"), tr("Book Deleted"));	//creating a pop-up information
}
