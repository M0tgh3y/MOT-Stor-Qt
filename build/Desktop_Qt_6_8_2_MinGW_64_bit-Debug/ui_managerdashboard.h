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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerdashboard
{
public:

    void setupUi(QWidget *managerdashboard)
    {
        if (managerdashboard->objectName().isEmpty())
            managerdashboard->setObjectName("managerdashboard");
        managerdashboard->resize(400, 300);

        retranslateUi(managerdashboard);

        QMetaObject::connectSlotsByName(managerdashboard);
    } // setupUi

    void retranslateUi(QWidget *managerdashboard)
    {
        managerdashboard->setWindowTitle(QCoreApplication::translate("managerdashboard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerdashboard: public Ui_managerdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERDASHBOARD_H
