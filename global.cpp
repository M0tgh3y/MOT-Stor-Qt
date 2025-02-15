#include "global.h"
#include <algorithm>  // For std::find

std::vector<QString> Cname;  // Define the global vector
std::vector<QString> Cpass;  // Define the global vector

void addCname(const QString& value) {
    Cname.push_back(value);
}

bool searchCname(const QString& value) {
    return std::find(Cname.begin(), Cname.end(), value) != Cname.end();
}

void addCpass(const QString& value) {
    Cpass.push_back(value);
}

bool searchCpass(const QString& value) {
    return std::find(Cpass.begin(), Cpass.end(), value) != Cpass.end();
}

void initializeData() {
    addCname("mot");
    addCpass("1383mot");

    addCname("ghey");
    addCpass("2004ghey");
}
