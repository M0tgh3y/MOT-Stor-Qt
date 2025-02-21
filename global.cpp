#include "global.h"
#include "managerwindow.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <QMessageBox>
using namespace std;

void customerdata::addcus() {
    ofstream file("manager", ios::app | ios::binary);
}

void addmanager(char unameM, char upassM){
    managerdata manager;

    manager.usernameM = unameM;
    manager.passwordM = upassM;

    ofstream file("manager", ios::app | ios::binary);

    if (file.is_open()) {
        file.write((char*)&manager, sizeof(managerdata));
        QMessageBox::information(nullptr, "WELCOME", "WELCOME!");
        file.close();
    } else {
        QMessageBox::information(nullptr, "ERROR", "ERROR!");
    }
}

void checkmanager(QString unameM, QString upassM) {

    managerdata manager;

    ifstream file("manager", ios::binary | ios::in);

    if (!file.is_open()) {
        QMessageBox::information(nullptr, "Error", "Unable to open the file.");
        return;
    }

    bool found = false;

    while (file.read((char*)&manager, sizeof(managerdata))) {

        qDebug() << "Checking username: " << manager.usernameM << " against input: " << unameM;
        qDebug() << "Checking password: " << manager.passwordM << " against input: " << upassM;

        if (unameM == manager.usernameM && upassM == manager.passwordM) {
            QMessageBox::information(nullptr, "WELCOME", "Welcome!");
            found = true;
            break;
        }
    }
    if (!found) {
        QMessageBox::information(nullptr, "Error", "Your username or password is invalid.");
    }

    file.close();
}


