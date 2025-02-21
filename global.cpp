#include "global.h"
#include "managerwindow.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <QMessageBox>
#include <QFile>
#include <QDataStream>

using namespace std;

void customerdata::addcus() {
    ofstream file("customer", ios::app | ios::binary | ios::in | ios::out);
}

void addmanager(QString unameM, QString upassM) {
    managerdata manager;

    QByteArray unameBytes = unameM.toUtf8();
    QByteArray upassBytes = upassM.toUtf8();

    strncpy(manager.usernameM, unameBytes.constData(), sizeof(manager.usernameM) - 1);
    manager.usernameM[sizeof(manager.usernameM) - 1] = '\0';

    strncpy(manager.passwordM, upassBytes.constData(), sizeof(manager.passwordM) - 1);
    manager.passwordM[sizeof(manager.passwordM) - 1] = '\0';

    qDebug() << "Writing Username: " << manager.usernameM;
    qDebug() << "Writing Password: " << manager.passwordM;

    std::ofstream file("manager", std::ios::app | std::ios::binary);
    if (!file.is_open()) {
        QMessageBox::information(nullptr, "Error", "Unable to open the file.");
        qDebug() << "Failed to open file: manager";
        return;
    }

    file.write(reinterpret_cast<char*>(&manager), sizeof(managerdata));

    if (file.fail()) {
        QMessageBox::information(nullptr, "Error", "Failed to write to the file.");
        qDebug() << "Failed to write data to the file.";
        return;
    }

    QMessageBox::information(nullptr, "SUCCESS", "Data has been written to the file.");
    file.close();
}

void checkmanager(QString unameM, QString upassM) {
    managerdata manager;

    std::ifstream file("manager", std::ios::binary | std::ios::in);
    if (!file.is_open()) {
        QMessageBox::information(nullptr, "Error", "Unable to open the file.");
        return;
    }

    bool found = false;

    while (file.read(reinterpret_cast<char*>(&manager), sizeof(managerdata))) {
        QString storedUsername = QString::fromUtf8(manager.usernameM);
        QString storedPassword = QString::fromUtf8(manager.passwordM);

        if (unameM == storedUsername && upassM == storedPassword) {
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
