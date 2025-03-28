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
    QPushButton *addNMan;
    QPushButton *addNPro;
    QPushButton *showMan;
    QPushButton *showPro;
    QLabel *mandash;
    QPushButton *incrasePro;
    QPushButton *back;
    QPushButton *incrasePro_2;

    void setupUi(QWidget *customerdashboard)
    {
        if (customerdashboard->objectName().isEmpty())
            customerdashboard->setObjectName("customerdashboard");
        customerdashboard->resize(700, 550);
        customerdashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127)"));
        addNMan = new QPushButton(customerdashboard);
        addNMan->setObjectName("addNMan");
        addNMan->setGeometry(QRect(365, 90, 220, 100));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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
        addNPro = new QPushButton(customerdashboard);
        addNPro->setObjectName("addNPro");
        addNPro->setGeometry(QRect(115, 90, 220, 100));
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
        showMan = new QPushButton(customerdashboard);
        showMan->setObjectName("showMan");
        showMan->setGeometry(QRect(365, 210, 220, 100));
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
        mandash = new QLabel(customerdashboard);
        mandash->setObjectName("mandash");
        mandash->setGeometry(QRect(220, 25, 260, 40));
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
        incrasePro = new QPushButton(customerdashboard);
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
        incrasePro_2 = new QPushButton(customerdashboard);
        incrasePro_2->setObjectName("incrasePro_2");
        incrasePro_2->setGeometry(QRect(365, 330, 220, 100));
        sizePolicy.setHeightForWidth(incrasePro_2->sizePolicy().hasHeightForWidth());
        incrasePro_2->setSizePolicy(sizePolicy);
        incrasePro_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        incrasePro_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        addNMan->setText(QCoreApplication::translate("customerdashboard", "buy", nullptr));
        addNPro->setText(QCoreApplication::translate("customerdashboard", "my profile", nullptr));
        showMan->setText(QCoreApplication::translate("customerdashboard", "past purchases", nullptr));
        showPro->setText(QCoreApplication::translate("customerdashboard", "show produc's", nullptr));
        mandash->setText(QCoreApplication::translate("customerdashboard", "customer DASHBOARD", nullptr));
        incrasePro->setText(QString());
        back->setText(QCoreApplication::translate("customerdashboard", "back", nullptr));
        incrasePro_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customerdashboard: public Ui_customerdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERDASHBOARD_H
