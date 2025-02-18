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
    QString usernameM;
    QString passwordM;
    QString nameman;
    QString lastnameman;
};

void checkmanager (QString U, QString P);

#endif // GLOBAL_H
