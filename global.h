#ifndef GLOBAL_H
#define GLOBAL_H

#include <vector>
#include <QString>

extern std::vector<QString> Cname;
void addCname(const QString& value);
bool searchCname(const QString& value);

extern std::vector<QString> Cpass;
void addCpass(const QString& value);
bool searchCpass(const QString& value);

void initializeData();

#endif // GLOBAL_H
