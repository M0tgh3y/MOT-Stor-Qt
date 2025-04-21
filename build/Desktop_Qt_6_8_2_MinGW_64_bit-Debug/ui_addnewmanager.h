/********************************************************************************
** Form generated from reading UI file 'addnewmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWMANAGER_H
#define UI_ADDNEWMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addnewmanager
{
public:
    QLabel *username;
    QLabel *password;
    QLabel *title;
    QLineEdit *useredit;
    QPushButton *back;
    QLineEdit *passedit;
    QPushButton *ok;

    void setupUi(QWidget *addnewmanager)
    {
        if (addnewmanager->objectName().isEmpty())
            addnewmanager->setObjectName("addnewmanager");
        addnewmanager->resize(400, 400);
        addnewmanager->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255)"));
        username = new QLabel(addnewmanager);
        username->setObjectName("username");
        username->setGeometry(QRect(70, 90, 140, 30));
        username->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        password = new QLabel(addnewmanager);
        password->setObjectName("password");
        password->setGeometry(QRect(70, 180, 140, 30));
        password->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        title = new QLabel(addnewmanager);
        title->setObjectName("title");
        title->setGeometry(QRect(90, 40, 220, 30));
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
        useredit = new QLineEdit(addnewmanager);
        useredit->setObjectName("useredit");
        useredit->setGeometry(QRect(70, 120, 260, 40));
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
        back = new QPushButton(addnewmanager);
        back->setObjectName("back");
        back->setGeometry(QRect(250, 300, 80, 35));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
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
        passedit = new QLineEdit(addnewmanager);
        passedit->setObjectName("passedit");
        passedit->setGeometry(QRect(70, 210, 260, 40));
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
        ok = new QPushButton(addnewmanager);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(70, 300, 80, 35));
        sizePolicy.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy);
        ok->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
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

        retranslateUi(addnewmanager);

        QMetaObject::connectSlotsByName(addnewmanager);
    } // setupUi

    void retranslateUi(QWidget *addnewmanager)
    {
        addnewmanager->setWindowTitle(QCoreApplication::translate("addnewmanager", "Form", nullptr));
        username->setText(QCoreApplication::translate("addnewmanager", "Username: ", nullptr));
        password->setText(QCoreApplication::translate("addnewmanager", "password:", nullptr));
        title->setText(QCoreApplication::translate("addnewmanager", "add new manager", nullptr));
        back->setText(QCoreApplication::translate("addnewmanager", "back", nullptr));
        ok->setText(QCoreApplication::translate("addnewmanager", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addnewmanager: public Ui_addnewmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWMANAGER_H
