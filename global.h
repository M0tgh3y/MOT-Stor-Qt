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

    void addcus();
};

class managerdata {
public:
    string usernameM;
    string passwordM;
};


void addmanager (string U, string P);
void checkmanager(string U, string P);

#endif // GLOBAL_H
