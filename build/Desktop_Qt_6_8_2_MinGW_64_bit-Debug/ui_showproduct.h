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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showproduct
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *showproduct)
    {
        if (showproduct->objectName().isEmpty())
            showproduct->setObjectName("showproduct");
        showproduct->resize(400, 400);
        showproduct->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255)"));
        tableWidget = new QTableWidget(showproduct);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(75, 75, 250, 250));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 162, 153)"));

        retranslateUi(showproduct);

        QMetaObject::connectSlotsByName(showproduct);
    } // setupUi

    void retranslateUi(QWidget *showproduct)
    {
        showproduct->setWindowTitle(QCoreApplication::translate("showproduct", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showproduct: public Ui_showproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPRODUCT_H
