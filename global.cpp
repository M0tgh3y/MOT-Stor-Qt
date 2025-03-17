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

bool checkmanager(string unameM, string upassM) {
    ifstream file(FILE_PATH);
    if (!file.is_open()) {
        QMessageBox::warning(nullptr, "Error", "Failed to Open File!");
        return false;
    }

    string line, storedUname, storedPass;

    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, storedUname, ',');
        getline(ss, storedPass, '\n');

        if (unameM == storedUname && upassM == storedPass) {
            file.close();
            return true;  // Login successful
        }
    }

    file.close();
    return false;  // Login failed
}

