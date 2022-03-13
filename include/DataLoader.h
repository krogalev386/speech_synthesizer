#pragma once
#include <string>
#include <fstream>

class DataLoader {
public:
    std::string load_text(const std::string & filename);
};