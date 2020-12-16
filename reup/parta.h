#pragma once
#include <string>



bool URL(std::string scheme, std::string authority);
std::string getScheme(std::string& url);
std::string getauthority(std::string& url);
