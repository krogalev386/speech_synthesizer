#pragma once
#include <map>
#include <string>
#include <vector>

class AudioLibrary {

    // Container
    std::map<std::string,std::string> library;
    
public:

    AudioLibrary();

    // Dump samples
    std::vector<std::string> get_samples() const;
    // Add sample and assigned .wav file name to the audio library
    void add_sample(const std::string & sample, const std::string & filename);
    // Get the .wav file name assigned to the sample
    std::string get_filename(const std::string & sample) const;
};