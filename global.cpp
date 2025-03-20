#include "global.h"
#include "managerwindow.h"
#include <QMessageBox>
#include <fstream>
#include <cstring>
#include <QDebug>
#include <sstream>

using namespace std;

const string FILE_PATH_1 = "C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/manager.csv";
const string FILE_PATH_2 = "C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/customer.csv";
const string FILE_PATH_3 = "C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/product.csv";

void addmanager(string unameM, string upassM) {
    ofstream file(FILE_PATH_1, ios::app);
    if (file.is_open()) {
        file << unameM << "," << upassM << "\n";
        file.close();
        QMessageBox::information(nullptr, "Success", "Manager Added Successfully");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to Open File!");
    }
}

bool checkmanager(string unameM, string upassM) {
    ifstream file(FILE_PATH_1);
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
            return true;
        }
    }

    file.close();
    return false;
}

void addNewCustomer(string unamecus, string passcus, string name, string lastname) {
    ifstream infile(FILE_PATH_2);
    string line;
    bool exists = false;

    while (getline(infile, line)) {
        stringstream ss(line);
        string existingUname;
        getline(ss, existingUname, ',');

        if (existingUname == unamecus) {
            exists = true;
            break;
        }
    }
    infile.close();

    if (exists) {
        QMessageBox::warning(nullptr, "Error", "Customer already exists!");
        return;
    }

    ofstream file(FILE_PATH_2, ios::app);
    long long int mojoody = 0;
    if (file.is_open()) {
        file << unamecus << "," << passcus << "," << name << "," << lastname << "," << mojoody << "\n";
        file.close();
        QMessageBox::information(nullptr, "Success", "Customer Added Successfully");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to Open File!");
    }
}

bool checkCustomer(string U, string P) {
    ifstream file(FILE_PATH_2);

    if (!file.is_open()) {
        QMessageBox::warning(nullptr, "Error", "Failed to Open File!");
        return false;
    }

    string line, storedUname, storedPass;

    while (getline(file, line)) {
        stringstream ss(line);

        getline(ss, storedUname, ',');
        getline(ss, storedPass, ',');

        if (U == storedUname && P == storedPass) {
            return true;
        }
    }

    file.close();
    return false;
}

void addNewProduct(std::string name, int number, int price) {
    ifstream infile(FILE_PATH_3);
    string line;
    bool exists = false;

    while (getline(infile, line)) {
        stringstream ss(line);
        string existingName;
        getline(ss, existingName, ',');

        if (existingName == name) {
            exists = true;
            break;
        }
    }
    infile.close();

    if (exists) {
        QMessageBox::warning(nullptr, "Error", "Product already exists!");
        return;
    }

    ofstream file(FILE_PATH_3, ios::app);
    if (file.is_open()) {
        file << name << "," << number << "," << price << "\n";
        file.close();
        QMessageBox::information(nullptr, "Success", "Product Added Successfully");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to Open File!");
    }
}
