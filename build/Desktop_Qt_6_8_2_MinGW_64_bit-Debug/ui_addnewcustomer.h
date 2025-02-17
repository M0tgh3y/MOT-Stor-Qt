/********************************************************************************
** Form generated from reading UI file 'addnewcustomer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWCUSTOMER_H
#define UI_ADDNEWCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addnewcustomer
{
public:
    QLabel *username;
    QLineEdit *passedit2;
    QLineEdit *useredit2;
    QLabel *password;
    QPushButton *add;
    QPushButton *pushButton_2;

    void setupUi(QWidget *addnewcustomer)
    {
        if (addnewcustomer->objectName().isEmpty())
            addnewcustomer->setObjectName("addnewcustomer");
        addnewcustomer->resize(400, 400);
        addnewcustomer->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        username = new QLabel(addnewcustomer);
        username->setObjectName("username");
        username->setGeometry(QRect(70, 70, 140, 30));
        username->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        passedit2 = new QLineEdit(addnewcustomer);
        passedit2->setObjectName("passedit2");
        passedit2->setGeometry(QRect(70, 210, 260, 40));
        passedit2->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    color: #000;\n"
"\n"
"border: 3px solid #000;   /* Solid border */\n"
"    padding: 0.25em 0.5em;\n"
"    border-radius: 15px 225px 255px 15px;  /* Custom border radius */\n"
"    position: relative;\n"
"    background-color: #fff;\n"
""));
        useredit2 = new QLineEdit(addnewcustomer);
        useredit2->setObjectName("useredit2");
        useredit2->setGeometry(QRect(70, 110, 260, 40));
        useredit2->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    color: #000;\n"
"\n"
"border: 3px solid #000;   /* Solid border */\n"
"    padding: 0.25em 0.5em;\n"
"    border-radius: 15px 225px 255px 15px;  /* Custom border radius */\n"
"    position: relative;\n"
"    background-color: #fff;\n"
""));
        password = new QLabel(addnewcustomer);
        password->setObjectName("password");
        password->setGeometry(QRect(70, 170, 140, 30));
        password->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        add = new QPushButton(addnewcustomer);
        add->setObjectName("add");
        add->setGeometry(QRect(80, 300, 84, 30));
        add->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
"    border: 3px solid #000;   /* Solid border */\n"
"    padding: 0.25em 0.5em;\n"
"    border-radius: 15px 225px 255px 15px;  /* Custom border radius */\n"
"    position: relative;\n"
"    background-color: #fff;   /* White background for the button */\n"
"    transition: all 0.3s ease; /* Smooth transition for hover effect */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;  /* Change background color on hover */\n"
"    border: 3px solid #888;     /* Lighter border on hover */\n"
"    transform: scale(1.05);      /* Slightly increase the size on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border: 3px solid #333;  /* Darker border on press */\n"
"    background-color: #f0f0f0;  /* Change background color when pressed */\n"
"    top: 5px;\n"
"    left: 5px;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(addnewcustomer);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 300, 84, 30));
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
"    border: 3px solid #000;   /* Solid border */\n"
"    padding: 0.25em 0.5em;\n"
"    border-radius: 15px 225px 255px 15px;  /* Custom border radius */\n"
"    position: relative;\n"
"    background-color: #fff;   /* White background for the button */\n"
"    transition: all 0.3s ease; /* Smooth transition for hover effect */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;  /* Change background color on hover */\n"
"    border: 3px solid #888;     /* Lighter border on hover */\n"
"    transform: scale(1.05);      /* Slightly increase the size on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border: 3px solid #333;  /* Darker border on press */\n"
"    background-color: #f0f0f0;  /* Change background color when pressed */\n"
"    top: 5px;\n"
"    left: 5px;\n"
"}\n"
""));

        retranslateUi(addnewcustomer);

        QMetaObject::connectSlotsByName(addnewcustomer);
    } // setupUi

    void retranslateUi(QWidget *addnewcustomer)
    {
        addnewcustomer->setWindowTitle(QCoreApplication::translate("addnewcustomer", "Form", nullptr));
        username->setText(QCoreApplication::translate("addnewcustomer", "Username: ", nullptr));
        password->setText(QCoreApplication::translate("addnewcustomer", "password:", nullptr));
        add->setText(QCoreApplication::translate("addnewcustomer", "ADD", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addnewcustomer", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addnewcustomer: public Ui_addnewcustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWCUSTOMER_H
