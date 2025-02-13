/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerwindow
{
public:
    QLabel *username;
    QLineEdit *useredit;
    QLabel *password;
    QLineEdit *passedit;
    QLabel *title;
    QPushButton *ok;
    QPushButton *back;

    void setupUi(QWidget *managerwindow)
    {
        if (managerwindow->objectName().isEmpty())
            managerwindow->setObjectName("managerwindow");
        managerwindow->resize(400, 400);
        managerwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);"));
        username = new QLabel(managerwindow);
        username->setObjectName("username");
        username->setGeometry(QRect(70, 90, 140, 30));
        username->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        useredit = new QLineEdit(managerwindow);
        useredit->setObjectName("useredit");
        useredit->setGeometry(QRect(70, 120, 260, 40));
        useredit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
"\n"
"border: 3px solid #000;   /* Solid border */\n"
"    padding: 0.25em 0.5em;\n"
"    border-radius: 15px 225px 255px 15px;  /* Custom border radius */\n"
"    position: relative;\n"
"    background-color: #fff;\n"
""));
        password = new QLabel(managerwindow);
        password->setObjectName("password");
        password->setGeometry(QRect(70, 180, 140, 30));
        password->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        passedit = new QLineEdit(managerwindow);
        passedit->setObjectName("passedit");
        passedit->setGeometry(QRect(70, 210, 260, 40));
        passedit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
"\n"
"border: 3px solid #000;   /* Solid border */\n"
"    padding: 0.25em 0.5em;\n"
"    border-radius: 15px 225px 255px 15px;  /* Custom border radius */\n"
"    position: relative;\n"
"    background-color: #fff;\n"
""));
        title = new QLabel(managerwindow);
        title->setObjectName("title");
        title->setGeometry(QRect(105, 40, 190, 30));
        title->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"font-size: 19px;\n"
"letter-spacing: 2px;\n"
"text-decoration: none;\n"
"text-transform: uppercase;\n"
"color: #000;\n"
"border: 3px solid #000;\n"
"text-align: center;\n"
"display: flex;\n"
"justify-content: center;\n"
"align-items: center;"));
        ok = new QPushButton(managerwindow);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(70, 300, 80, 35));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy);
        ok->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        back = new QPushButton(managerwindow);
        back->setObjectName("back");
        back->setGeometry(QRect(250, 300, 80, 35));
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
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

        retranslateUi(managerwindow);

        QMetaObject::connectSlotsByName(managerwindow);
    } // setupUi

    void retranslateUi(QWidget *managerwindow)
    {
        managerwindow->setWindowTitle(QCoreApplication::translate("managerwindow", "Form", nullptr));
        username->setText(QCoreApplication::translate("managerwindow", "Username: ", nullptr));
        password->setText(QCoreApplication::translate("managerwindow", "password:", nullptr));
        title->setText(QCoreApplication::translate("managerwindow", "Manager login", nullptr));
        ok->setText(QCoreApplication::translate("managerwindow", "ok", nullptr));
        back->setText(QCoreApplication::translate("managerwindow", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerwindow: public Ui_managerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
