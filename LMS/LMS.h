#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LMS.h"
#include <qstringlist.h>
#include <qpushbutton.h>
#include <qstackedwidget.h>
#include <qtablewidget.h>
#include <qmessagebox.h>
#include <qcombobox.h>
#include <qfile.h>
#include <qstylefactory.h>

#include <iostream>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>


class LMS : public QMainWindow
{
    Q_OBJECT

public:
    LMS(QWidget *parent = nullptr);
    ~LMS();

public slots:
    void onlogInButtonClick();
    void onLogOutButtonClick();
    void onSearchUserButtonMainClick(); //home search user button
    void onSearchBookMainButtonClick(); //home search book button
    void onAddUserButtonMainClick();    //home add user button

    void onDeleteUserButtonUdetailClick();  //user detail delete user
    void onUpdateUserButtonUdetailClick();  //user detial update user
    void updateAllUserDetailsPage();        //update all user details page and table

    void onDiscardButtonUpdateUserClick();  //update user page discard changes
    void onSaveButtonUpdateUserClick();  //update user page save changes

    void onSaveButtonAddUserClick();    //Add user save button
    void onDiscardButtonAddUserClick(); //Add user discard button

    void onSearchButtonBdetailClick();  //book detail search button
    void onRemoveButtonBdetailClick();  //book detial remove book button

    void onHomeButtonClick();   //home button for all cases

    void themeSelectChanged(int );  //for theme select combo box
    
    //other utility methods

private:
    Ui::LMSClass ui;

    const std::string server = "tcp://127.0.0.1:3306";
    const std::string username = "root";
    const std::string password = "";
    sql::Driver* driver = nullptr;
    sql::Connection* connection = nullptr;

    std::string currentUserId;

};
