#pragma once
#include <iostream>
#include <string>
#include <vector>

class AudioLibrary;

class Reader {

    //Container
    std::vector<std::vector<std::string>> samples;

public:

    // Fetch samples from the audio library
    void load_samples(const AudioLibrary & library);

    // Build vector of samples from the input text
    std::vector<std::string> parse_text_by_samples(const std::string & text);
};