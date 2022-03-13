#pragma once
#include "AudioLibrary.h"
#include <string>
#include <vector>

class Speaker {
public:

    // Play samples parsed by the Reader instance
    void play_samples(const AudioLibrary& lib, 
                      const std::vector<std::string>& samples);
};