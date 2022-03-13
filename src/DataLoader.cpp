#include "DataLoader.h"
#include <iostream>

std::string DataLoader::load_text(const std::string & filename){
    std::string text;
    std::string line_buffer;

    std::fstream text_file;
    text_file.open(filename, std::ios::in);
    while(getline(text_file, line_buffer)){
        text = text + " " + line_buffer;
    }
    text_file.close();
    return text;
}