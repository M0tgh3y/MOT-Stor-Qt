/********************************************************************************
** Form generated from reading UI file 'addnewproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPRODUCT_H
#define UI_ADDNEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addnewproduct
{
public:
    QLabel *addnewp;
    QLabel *name;
    QLineEdit *nameedit;
    QLabel *number;
    QLineEdit *numberedit;
    QLabel *price;
    QLineEdit *priceedit;
    QPushButton *add;
    QPushButton *cancel;

    void setupUi(QWidget *addnewproduct)
    {
        if (addnewproduct->objectName().isEmpty())
            addnewproduct->setObjectName("addnewproduct");
        addnewproduct->resize(400, 450);
        addnewproduct->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255)"));
        addnewp = new QLabel(addnewproduct);
        addnewp->setObjectName("addnewp");
        addnewp->setGeometry(QRect(91, 50, 218, 40));
        addnewp->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        name = new QLabel(addnewproduct);
        name->setObjectName("name");
        name->setGeometry(QRect(70, 110, 140, 30));
        name->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        nameedit = new QLineEdit(addnewproduct);
        nameedit->setObjectName("nameedit");
        nameedit->setGeometry(QRect(70, 140, 260, 40));
        nameedit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        number = new QLabel(addnewproduct);
        number->setObjectName("number");
        number->setGeometry(QRect(70, 190, 140, 30));
        number->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        numberedit = new QLineEdit(addnewproduct);
        numberedit->setObjectName("numberedit");
        numberedit->setGeometry(QRect(70, 220, 260, 40));
        numberedit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        price = new QLabel(addnewproduct);
        price->setObjectName("price");
        price->setGeometry(QRect(70, 270, 140, 30));
        price->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 16px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
""));
        priceedit = new QLineEdit(addnewproduct);
        priceedit->setObjectName("priceedit");
        priceedit->setGeometry(QRect(70, 300, 260, 40));
        priceedit->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        add = new QPushButton(addnewproduct);
        add->setObjectName("add");
        add->setGeometry(QRect(80, 380, 84, 30));
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
        cancel = new QPushButton(addnewproduct);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(218, 380, 96, 30));
        cancel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(addnewproduct);

        QMetaObject::connectSlotsByName(addnewproduct);
    } // setupUi

    void retranslateUi(QWidget *addnewproduct)
    {
        addnewproduct->setWindowTitle(QCoreApplication::translate("addnewproduct", "Form", nullptr));
        addnewp->setText(QCoreApplication::translate("addnewproduct", "add new product", nullptr));
        name->setText(QCoreApplication::translate("addnewproduct", "name:", nullptr));
        number->setText(QCoreApplication::translate("addnewproduct", "number:", nullptr));
        price->setText(QCoreApplication::translate("addnewproduct", "price:", nullptr));
        add->setText(QCoreApplication::translate("addnewproduct", "ADD", nullptr));
        cancel->setText(QCoreApplication::translate("addnewproduct", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addnewproduct: public Ui_addnewproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPRODUCT_H
