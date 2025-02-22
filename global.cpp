#include "global.h"
#include "managerwindow.h"
#include <QMessageBox>
#include <fstream>
#include <cstring>
#include <QDebug>

using namespace std;

void addmanager(string unameM, string upassM) {
    managerdata manager;

    manager.usernameM = unameM;
    manager.passwordM = upassM;

    ofstream file("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/manager", ios::app | ios::binary);
    if (file.is_open()) {
        file.write((char*)&manager, sizeof(managerdata));
        QMessageBox::information(nullptr, "success", "Welcome");
        file.close();
        return;
    }
    QMessageBox::information(nullptr, "Error", "Error!");
    file.close();
}

void checkmanager(string unameM, string upassM) {
    managerdata manager;

    ifstream file("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/manager", ios::app | ios::binary);
    while(file.read((char*)&manager, sizeof(managerdata))) {
        if(manager.usernameM == unameM && manager.passwordM == upassM) {
            QMessageBox::information(nullptr, "welcom", "Welcome");
            return;
            file.close();
        }
        QMessageBox::information(nullptr, "Error", "ggggggggggggggggggggggg");
    }

    QMessageBox::information(nullptr, "Error", "Error!");
    file.close();
}
