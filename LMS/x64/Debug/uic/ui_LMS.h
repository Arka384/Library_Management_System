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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LMSClass
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QLabel *label;
    QLineEdit *userName;
    QLineEdit *passWord;
    QPushButton *logIn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LMSClass)
    {
        if (LMSClass->objectName().isEmpty())
            LMSClass->setObjectName("LMSClass");
        LMSClass->resize(600, 400);
        centralWidget = new QWidget(LMSClass);
        centralWidget->setObjectName("centralWidget");
        line = new QFrame(centralWidget);
        line->setObjectName("line");
        line->setGeometry(QRect(90, 90, 401, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 60, 111, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        userName = new QLineEdit(centralWidget);
        userName->setObjectName("userName");
        userName->setGeometry(QRect(102, 120, 381, 31));
        QFont font1;
        font1.setPointSize(12);
        userName->setFont(font1);
        userName->setAlignment(Qt::AlignCenter);
        passWord = new QLineEdit(centralWidget);
        passWord->setObjectName("passWord");
        passWord->setGeometry(QRect(102, 170, 381, 31));
        passWord->setFont(font1);
        passWord->setAlignment(Qt::AlignCenter);
        logIn = new QPushButton(centralWidget);
        logIn->setObjectName("logIn");
        logIn->setGeometry(QRect(102, 220, 381, 31));
        LMSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LMSClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        LMSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LMSClass);
        mainToolBar->setObjectName("mainToolBar");
        LMSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LMSClass);
        statusBar->setObjectName("statusBar");
        LMSClass->setStatusBar(statusBar);

        retranslateUi(LMSClass);

        QMetaObject::connectSlotsByName(LMSClass);
    } // setupUi

    void retranslateUi(QMainWindow *LMSClass)
    {
        LMSClass->setWindowTitle(QCoreApplication::translate("LMSClass", "LMS", nullptr));
        label->setText(QCoreApplication::translate("LMSClass", "E-Library", nullptr));
        userName->setPlaceholderText(QCoreApplication::translate("LMSClass", "User Name", nullptr));
        passWord->setPlaceholderText(QCoreApplication::translate("LMSClass", "Password", nullptr));
        logIn->setText(QCoreApplication::translate("LMSClass", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LMSClass: public Ui_LMSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LMS_H
