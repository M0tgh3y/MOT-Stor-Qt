#include "global.h"
#include "managerwindow.cpp"
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

void customerdata::addcus() {
    ofstream file("manager", ios::app | ios::binary);
}

void addmanager(QString unameM, QString upassM){
    managerdata manager1;

    manager1.passwordM = upassM;
    manager1.passwordM = unameM;

    ofstream file("manager", ios::app | ios::binary);

    if (file.is_open()) {
        file.write((char*)&manager1, sizeof(managerdata));
        cout << "Manager details added successfully!" << endl;
        file.close();
    } else {
        cout << "Unable to open file" << endl;
    }
};
