#include "global.h"
#include "managerwindow.h"
#include <QMessageBox>
#include <fstream>
#include <cstring>
#include <QDebug>
#include <sstream>

using namespace std;

const string FILE_PATH = "C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/manager.csv";

void addmanager(string unameM, string upassM) {
    ofstream file(FILE_PATH, ios::app);
    if (file.is_open()) {
        file << unameM << "," << upassM << "\n";  // Store username,password in CSV format
        file.close();
        QMessageBox::information(nullptr, "Success", "Manager Added Successfully");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to Open File!");
    }
}

void checkmanager(string unameM, string upassM) {
    ifstream file(FILE_PATH);
    if (!file.is_open()) {
        QMessageBox::warning(nullptr, "Error", "Failed to Open File!");
        return;
    }

    string line, storedUname, storedPass;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, storedUname, ',');  // Read until comma
        getline(ss, storedPass, '\n');  // Read until newline

        if (unameM == storedUname && upassM == storedPass) {
            found = true;
            break;
        }
    }

    file.close();

    if (found) {
        QMessageBox::information(nullptr, "Welcome", "Login Successful");
    } else {
        QMessageBox::warning(nullptr, "Error", "Invalid Username or Password!");
    }
}
