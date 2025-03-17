/********************************************************************************
** Form generated from reading UI file 'managerdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERDASHBOARD_H
#define UI_MANAGERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerdashboard
{
public:
    QLabel *label;
    QPushButton *customer;
    QPushButton *customer_2;
    QPushButton *customer_3;
    QPushButton *customer_4;
    QPushButton *customer_5;

    void setupUi(QWidget *managerdashboard)
    {
        if (managerdashboard->objectName().isEmpty())
            managerdashboard->setObjectName("managerdashboard");
        managerdashboard->resize(400, 410);
        managerdashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255)"));
        label = new QLabel(managerdashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(75, 30, 250, 40));
        label->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        customer = new QPushButton(managerdashboard);
        customer->setObjectName("customer");
        customer->setGeometry(QRect(50, 110, 300, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customer->sizePolicy().hasHeightForWidth());
        customer->setSizePolicy(sizePolicy);
        customer->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        customer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        customer_2 = new QPushButton(managerdashboard);
        customer_2->setObjectName("customer_2");
        customer_2->setGeometry(QRect(50, 170, 300, 40));
        sizePolicy.setHeightForWidth(customer_2->sizePolicy().hasHeightForWidth());
        customer_2->setSizePolicy(sizePolicy);
        customer_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        customer_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        customer_3 = new QPushButton(managerdashboard);
        customer_3->setObjectName("customer_3");
        customer_3->setGeometry(QRect(50, 290, 300, 40));
        sizePolicy.setHeightForWidth(customer_3->sizePolicy().hasHeightForWidth());
        customer_3->setSizePolicy(sizePolicy);
        customer_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        customer_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        customer_4 = new QPushButton(managerdashboard);
        customer_4->setObjectName("customer_4");
        customer_4->setGeometry(QRect(50, 230, 300, 40));
        sizePolicy.setHeightForWidth(customer_4->sizePolicy().hasHeightForWidth());
        customer_4->setSizePolicy(sizePolicy);
        customer_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        customer_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        customer_5 = new QPushButton(managerdashboard);
        customer_5->setObjectName("customer_5");
        customer_5->setGeometry(QRect(50, 350, 300, 40));
        sizePolicy.setHeightForWidth(customer_5->sizePolicy().hasHeightForWidth());
        customer_5->setSizePolicy(sizePolicy);
        customer_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        customer_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 11px;\n"
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

        retranslateUi(managerdashboard);

        QMetaObject::connectSlotsByName(managerdashboard);
    } // setupUi

    void retranslateUi(QWidget *managerdashboard)
    {
        managerdashboard->setWindowTitle(QCoreApplication::translate("managerdashboard", "Form", nullptr));
        label->setText(QCoreApplication::translate("managerdashboard", "MANAGER DASHBOARD", nullptr));
        customer->setText(QCoreApplication::translate("managerdashboard", "Add new product", nullptr));
        customer_2->setText(QCoreApplication::translate("managerdashboard", "Add new manager", nullptr));
        customer_3->setText(QCoreApplication::translate("managerdashboard", "show manager's", nullptr));
        customer_4->setText(QCoreApplication::translate("managerdashboard", "show produc's", nullptr));
        customer_5->setText(QCoreApplication::translate("managerdashboard", "Increase the number of product's", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerdashboard: public Ui_managerdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERDASHBOARD_H
