#ifndef GLOBAL_H
#define GLOBAL_H

#include <vector>
#include <QString>
#include <fstream>
#include <iostream>

class customerdata {
public:
    QString usernameC;
    QString passwordC;
    QString namecus;
    QString lastnamecus;
    long long int balance;

    void addcus();
};

class managerdata {
public:
    char usernameM[100];
    char passwordM[100];
};


void addmanager (QString U, QString P);
void checkmanager(QString U, QString P);

#endif // GLOBAL_H
