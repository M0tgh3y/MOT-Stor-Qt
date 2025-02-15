#include "global.h"
#include <algorithm>  // For std::find

std::vector<std::string> Cname;  // Define the global vector
std::vector<std::string> Cpass;  // Define the global vector

void addCname(const std::string& value) {
    Cname.push_back(value);
}

bool searchCname(const std::string& value) {
    return std::find(Cname.begin(), Cname.end(), value) != Cname.end();
}

void addCpass(const std::string& value) {
    Cpass.push_back(value);
}

bool searchCpass(const std::string& value) {
    return std::find(Cpass.begin(), Cpass.end(), value) != Cpass.end();
}
