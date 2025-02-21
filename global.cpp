#include "global.h"
#include "managerwindow.h"
#include <QMessageBox>
#include <fstream>
#include <QString>
#include <QDebug>

using namespace std;

void addmanager(QString unameM, QString upassM) {
    managerdata manager;

    manager.usernameM = unameM;
    manager.passwordM = upassM;

    ofstream file("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/build/Desktop_Qt_6_8_2_MinGW_64_bit-Debug/manager", ios::app | ios::binary);
    if (file.is_open()) {
        file.write((char*)&manager, sizeof(managerdata));
        QMessageBox::information(nullptr, "success", "Welcome");
        file.close();
        return;
    }
    QMessageBox::information(nullptr, "Error", "Error!");
}

void checkmanager(QString unameM, QString upassM) {
    managerdata manager;
}
