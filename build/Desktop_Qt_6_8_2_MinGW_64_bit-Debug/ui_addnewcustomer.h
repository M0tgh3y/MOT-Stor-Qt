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
    QLineEdit *passedit;
    QLineEdit *useredit;
    QLabel *password;
    QPushButton *add;
    QPushButton *back;
    QLabel *firstname;
    QLineEdit *firstnameedit;
    QLabel *lastname;
    QLineEdit *lastnameedit;

    void setupUi(QWidget *addnewcustomer)
    {
        if (addnewcustomer->objectName().isEmpty())
            addnewcustomer->setObjectName("addnewcustomer");
        addnewcustomer->resize(400, 420);
        addnewcustomer->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        username = new QLabel(addnewcustomer);
        username->setObjectName("username");
        username->setGeometry(QRect(70, 20, 140, 30));
        username->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        passedit = new QLineEdit(addnewcustomer);
        passedit->setObjectName("passedit");
        passedit->setGeometry(QRect(70, 135, 260, 40));
        passedit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        useredit = new QLineEdit(addnewcustomer);
        useredit->setObjectName("useredit");
        useredit->setGeometry(QRect(70, 55, 260, 40));
        useredit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        password->setGeometry(QRect(70, 105, 140, 30));
        password->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        add = new QPushButton(addnewcustomer);
        add->setObjectName("add");
        add->setGeometry(QRect(80, 360, 84, 30));
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
        back = new QPushButton(addnewcustomer);
        back->setObjectName("back");
        back->setGeometry(QRect(230, 360, 84, 30));
        back->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        firstname = new QLabel(addnewcustomer);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(70, 185, 140, 30));
        firstname->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        firstnameedit = new QLineEdit(addnewcustomer);
        firstnameedit->setObjectName("firstnameedit");
        firstnameedit->setGeometry(QRect(70, 215, 260, 40));
        firstnameedit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        lastname = new QLabel(addnewcustomer);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(70, 265, 140, 30));
        lastname->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        lastnameedit = new QLineEdit(addnewcustomer);
        lastnameedit->setObjectName("lastnameedit");
        lastnameedit->setGeometry(QRect(70, 295, 260, 40));
        lastnameedit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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

        retranslateUi(addnewcustomer);

        QMetaObject::connectSlotsByName(addnewcustomer);
    } // setupUi

    void retranslateUi(QWidget *addnewcustomer)
    {
        addnewcustomer->setWindowTitle(QCoreApplication::translate("addnewcustomer", "Form", nullptr));
        username->setText(QCoreApplication::translate("addnewcustomer", "Username: ", nullptr));
        password->setText(QCoreApplication::translate("addnewcustomer", "password:", nullptr));
        add->setText(QCoreApplication::translate("addnewcustomer", "ADD", nullptr));
        back->setText(QCoreApplication::translate("addnewcustomer", "BACK", nullptr));
        firstname->setText(QCoreApplication::translate("addnewcustomer", "first name:", nullptr));
        lastname->setText(QCoreApplication::translate("addnewcustomer", "last name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addnewcustomer: public Ui_addnewcustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWCUSTOMER_H
