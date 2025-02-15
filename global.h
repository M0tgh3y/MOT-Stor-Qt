#ifndef GLOBAL_H
#define GLOBAL_H

#include <vector>
#include <string>

extern std::vector<std::string> Cname;
void addCname(const std::string& value);
bool searchCname(const std::string& value);  // Search function for Cname

extern std::vector<std::string> Cpass;
void addCpass(const std::string& value);
bool searchCpass(const std::string& value);  // Search function for Cpass

#endif // GLOBAL_H
