/********************************************************************************
** Form generated from reading UI file 'showproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPRODUCT_H
#define UI_SHOWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showproduct
{
public:
    QTableWidget *tableWidget;
    QPushButton *back;

    void setupUi(QWidget *showproduct)
    {
        if (showproduct->objectName().isEmpty())
            showproduct->setObjectName("showproduct");
        showproduct->resize(400, 400);
        showproduct->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255)"));
        tableWidget = new QTableWidget(showproduct);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(65, 35, 270, 270));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        back = new QPushButton(showproduct);
        back->setObjectName("back");
        back->setGeometry(QRect(160, 330, 80, 35));
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

        retranslateUi(showproduct);

        QMetaObject::connectSlotsByName(showproduct);
    } // setupUi

    void retranslateUi(QWidget *showproduct)
    {
        showproduct->setWindowTitle(QCoreApplication::translate("showproduct", "Form", nullptr));
        back->setText(QCoreApplication::translate("showproduct", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showproduct: public Ui_showproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPRODUCT_H
