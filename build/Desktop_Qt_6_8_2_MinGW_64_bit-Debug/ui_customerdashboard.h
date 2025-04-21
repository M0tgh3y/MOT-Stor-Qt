/********************************************************************************
** Form generated from reading UI file 'customerdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERDASHBOARD_H
#define UI_CUSTOMERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customerdashboard
{
public:
    QPushButton *buy;
    QPushButton *myprofile;
    QPushButton *paspurches;
    QPushButton *showPro;
    QLabel *cusdashboard;
    QPushButton *empty;
    QPushButton *back;
    QPushButton *empty2;

    void setupUi(QWidget *customerdashboard)
    {
        if (customerdashboard->objectName().isEmpty())
            customerdashboard->setObjectName("customerdashboard");
        customerdashboard->resize(700, 550);
        customerdashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127)"));
        buy = new QPushButton(customerdashboard);
        buy->setObjectName("buy");
        buy->setGeometry(QRect(365, 90, 220, 100));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buy->sizePolicy().hasHeightForWidth());
        buy->setSizePolicy(sizePolicy);
        buy->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        buy->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        myprofile = new QPushButton(customerdashboard);
        myprofile->setObjectName("myprofile");
        myprofile->setGeometry(QRect(115, 90, 220, 100));
        sizePolicy.setHeightForWidth(myprofile->sizePolicy().hasHeightForWidth());
        myprofile->setSizePolicy(sizePolicy);
        myprofile->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        myprofile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        paspurches = new QPushButton(customerdashboard);
        paspurches->setObjectName("paspurches");
        paspurches->setGeometry(QRect(365, 210, 220, 100));
        sizePolicy.setHeightForWidth(paspurches->sizePolicy().hasHeightForWidth());
        paspurches->setSizePolicy(sizePolicy);
        paspurches->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        paspurches->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        showPro = new QPushButton(customerdashboard);
        showPro->setObjectName("showPro");
        showPro->setGeometry(QRect(115, 210, 220, 100));
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
        cusdashboard = new QLabel(customerdashboard);
        cusdashboard->setObjectName("cusdashboard");
        cusdashboard->setGeometry(QRect(220, 25, 260, 40));
        cusdashboard->setStyleSheet(QString::fromUtf8("font-family: \"Open Sans\", sans-serif;\n"
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
        empty = new QPushButton(customerdashboard);
        empty->setObjectName("empty");
        empty->setGeometry(QRect(115, 330, 220, 100));
        sizePolicy.setHeightForWidth(empty->sizePolicy().hasHeightForWidth());
        empty->setSizePolicy(sizePolicy);
        empty->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        empty->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        back = new QPushButton(customerdashboard);
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
        empty2 = new QPushButton(customerdashboard);
        empty2->setObjectName("empty2");
        empty2->setGeometry(QRect(365, 330, 220, 100));
        sizePolicy.setHeightForWidth(empty2->sizePolicy().hasHeightForWidth());
        empty2->setSizePolicy(sizePolicy);
        empty2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        empty2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(customerdashboard);

        QMetaObject::connectSlotsByName(customerdashboard);
    } // setupUi

    void retranslateUi(QWidget *customerdashboard)
    {
        customerdashboard->setWindowTitle(QCoreApplication::translate("customerdashboard", "Form", nullptr));
        buy->setText(QCoreApplication::translate("customerdashboard", "buy", nullptr));
        myprofile->setText(QCoreApplication::translate("customerdashboard", "my profile", nullptr));
        paspurches->setText(QCoreApplication::translate("customerdashboard", "past purchases", nullptr));
        showPro->setText(QCoreApplication::translate("customerdashboard", "show produc's", nullptr));
        cusdashboard->setText(QCoreApplication::translate("customerdashboard", "customer DASHBOARD", nullptr));
        empty->setText(QString());
        back->setText(QCoreApplication::translate("customerdashboard", "back", nullptr));
        empty2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customerdashboard: public Ui_customerdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERDASHBOARD_H
