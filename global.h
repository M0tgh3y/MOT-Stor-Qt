#ifndef GLOBAL_H
#define GLOBAL_H

#include <vector>
#include <QString>
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

class customerdata {
public:
    string usernameC;
    string passwordC;
    string namecus;
    string lastnamecus;
    long long int balance;
};

class managerdata {
public:
    string usernameM;
    string passwordM;
};


void addmanager (string U, string P);
bool checkmanager(string U, string P);
void addNewCustomer(string U, string P, string name, string lastname);
bool checkCustomer(string U, string P);
void addnewproduct();

#endif // GLOBAL_H
