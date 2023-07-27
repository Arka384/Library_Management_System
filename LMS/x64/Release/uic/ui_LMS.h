/********************************************************************************
** Form generated from reading UI file 'LMS.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LMS_H
#define UI_LMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LMSClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QLineEdit *userName;
    QPushButton *logInButton;
    QLineEdit *passWord;
    QLabel *heading;
    QFrame *line;
    QWidget *mainPage;
    QLabel *label;
    QLineEdit *searchUserBar_main;
    QLabel *label_2;
    QPushButton *searchUserButton_main;
    QPushButton *logOutButton_main;
    QPushButton *addUserButton_main;
    QPushButton *searchBookButton_main;
    QComboBox *themeSelectComboBox;
    QLabel *label_15;
    QWidget *allUserDetailsPage;
    QLabel *label_14;
    QFrame *line_4;
    QTableWidget *allUsersDetailsTable;
    QPushButton *homeButtonAllUserDetails;
    QWidget *addUserPage;
    QLineEdit *addressLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *label_9;
    QFrame *line_3;
    QLabel *label_10;
    QLineEdit *phoneLineEdit;
    QPushButton *saveButton_AddUser;
    QLineEdit *emailLineEdit;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *discardButton_AddUser;
    QWidget *bookDetailPage;
    QLabel *label_3;
    QLineEdit *searchBar_Bdetail;
    QPushButton *searchButton_Bdetail;
    QTableWidget *bookTable_Bdetail;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *updateButton_Bdetail;
    QPushButton *removeButton_Bdetail;
    QPushButton *homeButton_Bdetail;
    QWidget *userDetailPage;
    QLabel *name_Udetail;
    QLabel *phone;
    QLabel *email;
    QLabel *address;
    QTableWidget *bookTable_Udetail;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *updateUserButton_Udetail;
    QPushButton *deleteUserButton_Udetail;
    QPushButton *homeButton_Udetail;
    QLabel *lable;
    QLabel *phone_Udetail;
    QLabel *email_Udetail;
    QLabel *address_Udetail;
    QWidget *updateUserPage;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *newNameLineEdit;
    QLabel *label_6;
    QLineEdit *newPhoneLineEdit;
    QLabel *label_7;
    QLineEdit *newEmailLineEdit;
    QLabel *label_8;
    QLineEdit *newAddressLineEdit;
    QPushButton *saveButton_UpdateUser;
    QPushButton *discardButton_UpdateUser;
    QFrame *line_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LMSClass)
    {
        if (LMSClass->objectName().isEmpty())
            LMSClass->setObjectName("LMSClass");
        LMSClass->resize(717, 388);
        centralWidget = new QWidget(LMSClass);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 711, 361));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        userName = new QLineEdit(loginPage);
        userName->setObjectName("userName");
        userName->setGeometry(QRect(170, 130, 381, 31));
        QFont font;
        font.setPointSize(12);
        userName->setFont(font);
        userName->setAlignment(Qt::AlignCenter);
        logInButton = new QPushButton(loginPage);
        logInButton->setObjectName("logInButton");
        logInButton->setGeometry(QRect(170, 230, 381, 31));
        logInButton->setFont(font);
        passWord = new QLineEdit(loginPage);
        passWord->setObjectName("passWord");
        passWord->setGeometry(QRect(170, 180, 381, 31));
        passWord->setFont(font);
        passWord->setAlignment(Qt::AlignCenter);
        heading = new QLabel(loginPage);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(308, 70, 111, 31));
        QFont font1;
        font1.setPointSize(20);
        heading->setFont(font1);
        line = new QFrame(loginPage);
        line->setObjectName("line");
        line->setGeometry(QRect(158, 100, 401, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(loginPage);
        mainPage = new QWidget();
        mainPage->setObjectName("mainPage");
        label = new QLabel(mainPage);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 50, 171, 41));
        label->setFont(font1);
        searchUserBar_main = new QLineEdit(mainPage);
        searchUserBar_main->setObjectName("searchUserBar_main");
        searchUserBar_main->setGeometry(QRect(140, 160, 431, 31));
        searchUserBar_main->setFont(font);
        searchUserBar_main->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(mainPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 140, 131, 16));
        label_2->setFont(font);
        searchUserButton_main = new QPushButton(mainPage);
        searchUserButton_main->setObjectName("searchUserButton_main");
        searchUserButton_main->setGeometry(QRect(290, 210, 121, 31));
        searchUserButton_main->setFont(font);
        logOutButton_main = new QPushButton(mainPage);
        logOutButton_main->setObjectName("logOutButton_main");
        logOutButton_main->setGeometry(QRect(10, 320, 75, 24));
        addUserButton_main = new QPushButton(mainPage);
        addUserButton_main->setObjectName("addUserButton_main");
        addUserButton_main->setGeometry(QRect(610, 10, 100, 24));
        searchBookButton_main = new QPushButton(mainPage);
        searchBookButton_main->setObjectName("searchBookButton_main");
        searchBookButton_main->setGeometry(QRect(10, 10, 100, 24));
        themeSelectComboBox = new QComboBox(mainPage);
        themeSelectComboBox->addItem(QString());
        themeSelectComboBox->addItem(QString());
        themeSelectComboBox->addItem(QString());
        themeSelectComboBox->setObjectName("themeSelectComboBox");
        themeSelectComboBox->setGeometry(QRect(10, 284, 91, 21));
        QFont font2;
        font2.setPointSize(11);
        themeSelectComboBox->setFont(font2);
        label_15 = new QLabel(mainPage);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 260, 61, 20));
        label_15->setFont(font2);
        stackedWidget->addWidget(mainPage);
        allUserDetailsPage = new QWidget();
        allUserDetailsPage->setObjectName("allUserDetailsPage");
        label_14 = new QLabel(allUserDetailsPage);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 0, 281, 41));
        QFont font3;
        font3.setPointSize(18);
        label_14->setFont(font3);
        line_4 = new QFrame(allUserDetailsPage);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(10, 40, 701, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        allUsersDetailsTable = new QTableWidget(allUserDetailsPage);
        if (allUsersDetailsTable->columnCount() < 4)
            allUsersDetailsTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allUsersDetailsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        allUsersDetailsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        allUsersDetailsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        allUsersDetailsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        allUsersDetailsTable->setObjectName("allUsersDetailsTable");
        allUsersDetailsTable->setGeometry(QRect(10, 60, 701, 251));
        homeButtonAllUserDetails = new QPushButton(allUserDetailsPage);
        homeButtonAllUserDetails->setObjectName("homeButtonAllUserDetails");
        homeButtonAllUserDetails->setGeometry(QRect(10, 320, 701, 31));
        homeButtonAllUserDetails->setFont(font2);
        stackedWidget->addWidget(allUserDetailsPage);
        addUserPage = new QWidget();
        addUserPage->setObjectName("addUserPage");
        addressLineEdit = new QLineEdit(addUserPage);
        addressLineEdit->setObjectName("addressLineEdit");
        addressLineEdit->setGeometry(QRect(100, 230, 591, 61));
        addressLineEdit->setFont(font);
        addressLineEdit->setAlignment(Qt::AlignCenter);
        nameLineEdit = new QLineEdit(addUserPage);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(100, 80, 591, 31));
        nameLineEdit->setFont(font);
        nameLineEdit->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(addUserPage);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 180, 51, 31));
        QFont font4;
        font4.setPointSize(14);
        label_9->setFont(font4);
        line_3 = new QFrame(addUserPage);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(10, 50, 691, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(addUserPage);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 10, 281, 41));
        label_10->setFont(font3);
        phoneLineEdit = new QLineEdit(addUserPage);
        phoneLineEdit->setObjectName("phoneLineEdit");
        phoneLineEdit->setGeometry(QRect(100, 130, 591, 31));
        phoneLineEdit->setFont(font);
        phoneLineEdit->setAlignment(Qt::AlignCenter);
        saveButton_AddUser = new QPushButton(addUserPage);
        saveButton_AddUser->setObjectName("saveButton_AddUser");
        saveButton_AddUser->setGeometry(QRect(500, 320, 80, 31));
        saveButton_AddUser->setFont(font2);
        emailLineEdit = new QLineEdit(addUserPage);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(100, 180, 591, 31));
        emailLineEdit->setFont(font);
        emailLineEdit->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(addUserPage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 230, 71, 31));
        label_11->setFont(font4);
        label_12 = new QLabel(addUserPage);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 80, 71, 31));
        label_12->setFont(font4);
        label_13 = new QLabel(addUserPage);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 130, 71, 31));
        label_13->setFont(font4);
        discardButton_AddUser = new QPushButton(addUserPage);
        discardButton_AddUser->setObjectName("discardButton_AddUser");
        discardButton_AddUser->setGeometry(QRect(600, 320, 80, 31));
        discardButton_AddUser->setFont(font2);
        stackedWidget->addWidget(addUserPage);
        bookDetailPage = new QWidget();
        bookDetailPage->setObjectName("bookDetailPage");
        label_3 = new QLabel(bookDetailPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 0, 181, 31));
        label_3->setFont(font1);
        searchBar_Bdetail = new QLineEdit(bookDetailPage);
        searchBar_Bdetail->setObjectName("searchBar_Bdetail");
        searchBar_Bdetail->setGeometry(QRect(16, 40, 581, 31));
        QFont font5;
        font5.setPointSize(13);
        searchBar_Bdetail->setFont(font5);
        searchButton_Bdetail = new QPushButton(bookDetailPage);
        searchButton_Bdetail->setObjectName("searchButton_Bdetail");
        searchButton_Bdetail->setGeometry(QRect(610, 40, 90, 30));
        searchButton_Bdetail->setFont(font);
        bookTable_Bdetail = new QTableWidget(bookDetailPage);
        if (bookTable_Bdetail->columnCount() < 4)
            bookTable_Bdetail->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        bookTable_Bdetail->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        bookTable_Bdetail->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        bookTable_Bdetail->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        bookTable_Bdetail->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        bookTable_Bdetail->setObjectName("bookTable_Bdetail");
        bookTable_Bdetail->setGeometry(QRect(20, 80, 571, 261));
        verticalLayoutWidget_2 = new QWidget(bookDetailPage);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(600, 230, 111, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        updateButton_Bdetail = new QPushButton(verticalLayoutWidget_2);
        updateButton_Bdetail->setObjectName("updateButton_Bdetail");

        verticalLayout_2->addWidget(updateButton_Bdetail);

        removeButton_Bdetail = new QPushButton(verticalLayoutWidget_2);
        removeButton_Bdetail->setObjectName("removeButton_Bdetail");

        verticalLayout_2->addWidget(removeButton_Bdetail);

        homeButton_Bdetail = new QPushButton(verticalLayoutWidget_2);
        homeButton_Bdetail->setObjectName("homeButton_Bdetail");

        verticalLayout_2->addWidget(homeButton_Bdetail);

        stackedWidget->addWidget(bookDetailPage);
        userDetailPage = new QWidget();
        userDetailPage->setObjectName("userDetailPage");
        name_Udetail = new QLabel(userDetailPage);
        name_Udetail->setObjectName("name_Udetail");
        name_Udetail->setGeometry(QRect(30, 0, 211, 61));
        name_Udetail->setFont(font1);
        phone = new QLabel(userDetailPage);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(30, 50, 51, 31));
        phone->setFont(font);
        email = new QLabel(userDetailPage);
        email->setObjectName("email");
        email->setGeometry(QRect(30, 90, 41, 21));
        email->setFont(font);
        address = new QLabel(userDetailPage);
        address->setObjectName("address");
        address->setGeometry(QRect(30, 130, 61, 21));
        address->setFont(font);
        bookTable_Udetail = new QTableWidget(userDetailPage);
        if (bookTable_Udetail->columnCount() < 4)
            bookTable_Udetail->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        bookTable_Udetail->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        bookTable_Udetail->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        bookTable_Udetail->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        bookTable_Udetail->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        bookTable_Udetail->setObjectName("bookTable_Udetail");
        bookTable_Udetail->setGeometry(QRect(300, 50, 401, 301));
        verticalLayoutWidget = new QWidget(userDetailPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 230, 281, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        updateUserButton_Udetail = new QPushButton(verticalLayoutWidget);
        updateUserButton_Udetail->setObjectName("updateUserButton_Udetail");

        verticalLayout->addWidget(updateUserButton_Udetail);

        deleteUserButton_Udetail = new QPushButton(verticalLayoutWidget);
        deleteUserButton_Udetail->setObjectName("deleteUserButton_Udetail");

        verticalLayout->addWidget(deleteUserButton_Udetail);

        homeButton_Udetail = new QPushButton(verticalLayoutWidget);
        homeButton_Udetail->setObjectName("homeButton_Udetail");

        verticalLayout->addWidget(homeButton_Udetail);

        lable = new QLabel(userDetailPage);
        lable->setObjectName("lable");
        lable->setGeometry(QRect(300, 10, 321, 41));
        QFont font6;
        font6.setPointSize(16);
        lable->setFont(font6);
        phone_Udetail = new QLabel(userDetailPage);
        phone_Udetail->setObjectName("phone_Udetail");
        phone_Udetail->setGeometry(QRect(90, 50, 161, 31));
        phone_Udetail->setFont(font);
        email_Udetail = new QLabel(userDetailPage);
        email_Udetail->setObjectName("email_Udetail");
        email_Udetail->setGeometry(QRect(80, 90, 171, 21));
        email_Udetail->setFont(font);
        address_Udetail = new QLabel(userDetailPage);
        address_Udetail->setObjectName("address_Udetail");
        address_Udetail->setGeometry(QRect(100, 130, 191, 51));
        address_Udetail->setFont(font);
        stackedWidget->addWidget(userDetailPage);
        updateUserPage = new QWidget();
        updateUserPage->setObjectName("updateUserPage");
        label_4 = new QLabel(updateUserPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 80, 71, 31));
        label_4->setFont(font4);
        label_5 = new QLabel(updateUserPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 241, 41));
        label_5->setFont(font3);
        newNameLineEdit = new QLineEdit(updateUserPage);
        newNameLineEdit->setObjectName("newNameLineEdit");
        newNameLineEdit->setGeometry(QRect(100, 80, 591, 31));
        newNameLineEdit->setFont(font);
        newNameLineEdit->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(updateUserPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 130, 71, 31));
        label_6->setFont(font4);
        newPhoneLineEdit = new QLineEdit(updateUserPage);
        newPhoneLineEdit->setObjectName("newPhoneLineEdit");
        newPhoneLineEdit->setGeometry(QRect(100, 130, 591, 31));
        newPhoneLineEdit->setFont(font);
        newPhoneLineEdit->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(updateUserPage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 180, 51, 31));
        label_7->setFont(font4);
        newEmailLineEdit = new QLineEdit(updateUserPage);
        newEmailLineEdit->setObjectName("newEmailLineEdit");
        newEmailLineEdit->setGeometry(QRect(100, 180, 591, 31));
        newEmailLineEdit->setFont(font);
        newEmailLineEdit->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(updateUserPage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 230, 71, 31));
        label_8->setFont(font4);
        newAddressLineEdit = new QLineEdit(updateUserPage);
        newAddressLineEdit->setObjectName("newAddressLineEdit");
        newAddressLineEdit->setGeometry(QRect(100, 230, 591, 61));
        newAddressLineEdit->setFont(font);
        newAddressLineEdit->setAlignment(Qt::AlignCenter);
        saveButton_UpdateUser = new QPushButton(updateUserPage);
        saveButton_UpdateUser->setObjectName("saveButton_UpdateUser");
        saveButton_UpdateUser->setGeometry(QRect(500, 320, 80, 31));
        saveButton_UpdateUser->setFont(font2);
        discardButton_UpdateUser = new QPushButton(updateUserPage);
        discardButton_UpdateUser->setObjectName("discardButton_UpdateUser");
        discardButton_UpdateUser->setGeometry(QRect(600, 320, 80, 31));
        discardButton_UpdateUser->setFont(font2);
        line_2 = new QFrame(updateUserPage);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(10, 50, 691, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(updateUserPage);
        LMSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LMSClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 717, 22));
        LMSClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(LMSClass);
        statusBar->setObjectName("statusBar");
        LMSClass->setStatusBar(statusBar);

        retranslateUi(LMSClass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LMSClass);
    } // setupUi

    void retranslateUi(QMainWindow *LMSClass)
    {
        LMSClass->setWindowTitle(QCoreApplication::translate("LMSClass", "LMS", nullptr));
        userName->setPlaceholderText(QCoreApplication::translate("LMSClass", "User Name", nullptr));
        logInButton->setText(QCoreApplication::translate("LMSClass", "GO", nullptr));
        passWord->setPlaceholderText(QCoreApplication::translate("LMSClass", "Password", nullptr));
        heading->setText(QCoreApplication::translate("LMSClass", "E-Library", nullptr));
        label->setText(QCoreApplication::translate("LMSClass", "welcome back", nullptr));
#if QT_CONFIG(tooltip)
        searchUserBar_main->setToolTip(QCoreApplication::translate("LMSClass", "<html><head/><body><p>Enter user <span style=\" font-weight:700;\">ID</span> or write <span style=\" font-weight:700;\">All</span> to see all members</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        searchUserBar_main->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter User ID", nullptr));
        label_2->setText(QCoreApplication::translate("LMSClass", "Search user by ID", nullptr));
        searchUserButton_main->setText(QCoreApplication::translate("LMSClass", "SEARCH", nullptr));
        logOutButton_main->setText(QCoreApplication::translate("LMSClass", "LOG OUT", nullptr));
        addUserButton_main->setText(QCoreApplication::translate("LMSClass", "ADD USER", nullptr));
        searchBookButton_main->setText(QCoreApplication::translate("LMSClass", "SEARCH BOOKS", nullptr));
        themeSelectComboBox->setItemText(0, QCoreApplication::translate("LMSClass", "Diffnes", nullptr));
        themeSelectComboBox->setItemText(1, QCoreApplication::translate("LMSClass", "Combinear", nullptr));
        themeSelectComboBox->setItemText(2, QCoreApplication::translate("LMSClass", "Obit", nullptr));

        label_15->setText(QCoreApplication::translate("LMSClass", "Theme", nullptr));
        label_14->setText(QCoreApplication::translate("LMSClass", "Current Library Members", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allUsersDetailsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LMSClass", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allUsersDetailsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LMSClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allUsersDetailsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("LMSClass", "Phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allUsersDetailsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("LMSClass", "Email", nullptr));
        homeButtonAllUserDetails->setText(QCoreApplication::translate("LMSClass", "Home", nullptr));
        addressLineEdit->setText(QString());
        addressLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new address", nullptr));
        nameLineEdit->setText(QString());
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new Name", nullptr));
        label_9->setText(QCoreApplication::translate("LMSClass", "Email:", nullptr));
        label_10->setText(QCoreApplication::translate("LMSClass", "Adding new user details", nullptr));
        phoneLineEdit->setText(QString());
        phoneLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new phone number", nullptr));
        saveButton_AddUser->setText(QCoreApplication::translate("LMSClass", "Save", nullptr));
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new email", nullptr));
        label_11->setText(QCoreApplication::translate("LMSClass", "Address:", nullptr));
        label_12->setText(QCoreApplication::translate("LMSClass", "Name:", nullptr));
        label_13->setText(QCoreApplication::translate("LMSClass", "Phone:", nullptr));
        discardButton_AddUser->setText(QCoreApplication::translate("LMSClass", "Discard", nullptr));
        label_3->setText(QCoreApplication::translate("LMSClass", "LIST OF BOOKS", nullptr));
        searchBar_Bdetail->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter book name", nullptr));
        searchButton_Bdetail->setText(QCoreApplication::translate("LMSClass", "SEARCH", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = bookTable_Bdetail->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("LMSClass", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = bookTable_Bdetail->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("LMSClass", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = bookTable_Bdetail->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("LMSClass", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = bookTable_Bdetail->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("LMSClass", "Author", nullptr));
        updateButton_Bdetail->setText(QCoreApplication::translate("LMSClass", "UPDATE", nullptr));
        removeButton_Bdetail->setText(QCoreApplication::translate("LMSClass", "REMOVE", nullptr));
        homeButton_Bdetail->setText(QCoreApplication::translate("LMSClass", "HOME", nullptr));
        name_Udetail->setText(QCoreApplication::translate("LMSClass", "User Name here", nullptr));
        phone->setText(QCoreApplication::translate("LMSClass", "Phone:", nullptr));
        email->setText(QCoreApplication::translate("LMSClass", "Email: ", nullptr));
        address->setText(QCoreApplication::translate("LMSClass", "Address:", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = bookTable_Udetail->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("LMSClass", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = bookTable_Udetail->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("LMSClass", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = bookTable_Udetail->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("LMSClass", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = bookTable_Udetail->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("LMSClass", "Author", nullptr));
        updateUserButton_Udetail->setText(QCoreApplication::translate("LMSClass", "UPDATE USER", nullptr));
        deleteUserButton_Udetail->setText(QCoreApplication::translate("LMSClass", "DELETE USER", nullptr));
        homeButton_Udetail->setText(QCoreApplication::translate("LMSClass", "HOME", nullptr));
        lable->setText(QCoreApplication::translate("LMSClass", "Books Issued by the user", nullptr));
        phone_Udetail->setText(QString());
        email_Udetail->setText(QString());
        address_Udetail->setText(QString());
        label_4->setText(QCoreApplication::translate("LMSClass", "Name:", nullptr));
        label_5->setText(QCoreApplication::translate("LMSClass", "Updating user details", nullptr));
        newNameLineEdit->setText(QString());
        newNameLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new Name", nullptr));
        label_6->setText(QCoreApplication::translate("LMSClass", "Phone:", nullptr));
        newPhoneLineEdit->setText(QString());
        newPhoneLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new phone number", nullptr));
        label_7->setText(QCoreApplication::translate("LMSClass", "Email:", nullptr));
        newEmailLineEdit->setText(QString());
        newEmailLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new email", nullptr));
        label_8->setText(QCoreApplication::translate("LMSClass", "Address:", nullptr));
        newAddressLineEdit->setText(QString());
        newAddressLineEdit->setPlaceholderText(QCoreApplication::translate("LMSClass", "Enter new address", nullptr));
        saveButton_UpdateUser->setText(QCoreApplication::translate("LMSClass", "Save", nullptr));
        discardButton_UpdateUser->setText(QCoreApplication::translate("LMSClass", "Discard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LMSClass: public Ui_LMSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LMS_H
