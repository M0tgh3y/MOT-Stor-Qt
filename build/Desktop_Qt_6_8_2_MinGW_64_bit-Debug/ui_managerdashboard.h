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
    QLabel *mandash;
    QPushButton *addNPro;
    QPushButton *addNMan;
    QPushButton *showMan;
    QPushButton *showPro;
    QPushButton *incrasePro;
    QPushButton *back;

    void setupUi(QWidget *managerdashboard)
    {
        if (managerdashboard->objectName().isEmpty())
            managerdashboard->setObjectName("managerdashboard");
        managerdashboard->resize(700, 550);
        managerdashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255)"));
        mandash = new QLabel(managerdashboard);
        mandash->setObjectName("mandash");
        mandash->setGeometry(QRect(225, 25, 250, 40));
        mandash->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        addNPro = new QPushButton(managerdashboard);
        addNPro->setObjectName("addNPro");
        addNPro->setGeometry(QRect(365, 90, 220, 100));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addNPro->sizePolicy().hasHeightForWidth());
        addNPro->setSizePolicy(sizePolicy);
        addNPro->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addNPro->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        addNMan = new QPushButton(managerdashboard);
        addNMan->setObjectName("addNMan");
        addNMan->setGeometry(QRect(365, 210, 220, 100));
        sizePolicy.setHeightForWidth(addNMan->sizePolicy().hasHeightForWidth());
        addNMan->setSizePolicy(sizePolicy);
        addNMan->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addNMan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        showMan = new QPushButton(managerdashboard);
        showMan->setObjectName("showMan");
        showMan->setGeometry(QRect(115, 210, 220, 100));
        sizePolicy.setHeightForWidth(showMan->sizePolicy().hasHeightForWidth());
        showMan->setSizePolicy(sizePolicy);
        showMan->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        showMan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        showPro = new QPushButton(managerdashboard);
        showPro->setObjectName("showPro");
        showPro->setGeometry(QRect(115, 90, 220, 100));
        sizePolicy.setHeightForWidth(showPro->sizePolicy().hasHeightForWidth());
        showPro->setSizePolicy(sizePolicy);
        showPro->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        showPro->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        incrasePro = new QPushButton(managerdashboard);
        incrasePro->setObjectName("incrasePro");
        incrasePro->setGeometry(QRect(115, 330, 220, 100));
        sizePolicy.setHeightForWidth(incrasePro->sizePolicy().hasHeightForWidth());
        incrasePro->setSizePolicy(sizePolicy);
        incrasePro->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        incrasePro->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: \"Open Sans\", sans-serif;\n"
"    font-size: 11px;\n"
"    letter-spacing: 2px;\n"
"    text-decoration: none;\n"
"    text-transform: uppercase;\n"
"    color: #000;\n"
"    border: 3px solid #000;   /* Solid border */\n"
"    padding: 5px 10px;  /* Adjust padding for better text alignment */\n"
"    border-radius: 15px 225px 255px 15px;  /* Custom border radius */\n"
"    position: relative;\n"
"    background-color: #fff;   /* White background for the button */\n"
"    transition: all 0.3s ease; /* Smooth transition for hover effect */\n"
"    text-align: center; /* Center text */\n"
"    min-width: 60px; /* Ensure wrapping */\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;  /* Change background color on hover */\n"
"    border: 3px solid #888;     /* Lighter border on hover */\n"
"    transform: scale(1.05);      /* Slightly increase the size on hover */\n"
"}\n"
"\n"
"/* Pressed effect */\n"
"QPushButton:pressed {\n"
"    bor"
                        "der: 3px solid #333;  /* Darker border on press */\n"
"    background-color: #f0f0f0;  /* Change background color when pressed */\n"
"    top: 2px;  /* Reduce movement */\n"
"    left: 2px;\n"
"}\n"
""));
        back = new QPushButton(managerdashboard);
        back->setObjectName("back");
        back->setGeometry(QRect(310, 480, 80, 35));
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

        retranslateUi(managerdashboard);

        QMetaObject::connectSlotsByName(managerdashboard);
    } // setupUi

    void retranslateUi(QWidget *managerdashboard)
    {
        managerdashboard->setWindowTitle(QCoreApplication::translate("managerdashboard", "Form", nullptr));
        mandash->setText(QCoreApplication::translate("managerdashboard", "MANAGER DASHBOARD", nullptr));
        addNPro->setText(QCoreApplication::translate("managerdashboard", "Add new product", nullptr));
        addNMan->setText(QCoreApplication::translate("managerdashboard", "Add new manager", nullptr));
        showMan->setText(QCoreApplication::translate("managerdashboard", "show manager's", nullptr));
        showPro->setText(QCoreApplication::translate("managerdashboard", "show product's", nullptr));
        incrasePro->setText(QCoreApplication::translate("managerdashboard", "Increase the number of product's", nullptr));
        back->setText(QCoreApplication::translate("managerdashboard", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerdashboard: public Ui_managerdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERDASHBOARD_H
