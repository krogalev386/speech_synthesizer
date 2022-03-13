#include "Reader.h"
#include "AudioLibrary.h"
#include <algorithm>

void Reader::load_samples(const AudioLibrary & library){
    // three vectors for one, two and three letter samples
    samples = std::vector<std::vector<std::string>>(3); 

    for (auto sample: library.get_samples()){
        if (sample.size() == 1)
            samples[0].push_back(sample);
        if (sample.size() == 2)
            samples[1].push_back(sample);
        else
            samples[2].push_back(sample);
    }
}

std::vector<std::string> Reader::parse_text_by_samples(const std::string & text){

    std::vector<std::string> sample_vector;
    size_t pos_index = 0;

    while (pos_index < text.size()){ // running through the text
        std::string sample;
        // Searching the longest sample that fits for the current syllable
        for (int sample_length = 1; sample_length <= samples.size(); sample_length++){
            char slice[sample_length+1];
            slice[sample_length] = '\0';
            size_t size = text.copy(slice, sample_length, pos_index);
            std::string str_slice(slice);
            std::vector<std::string>::iterator sample_it = std::find(samples[sample_length-1].begin(),
                                                                     samples[sample_length-1].end(),
                                                                     str_slice);
            // If longer sample is found, "sample" variable updates
            if (sample_it != samples[sample_length-1].end()){
                sample = *sample_it;
            }
        }
        if (sample.size() == 0){
            std::cout << "Error: no samples for " << "\"" << text[pos_index] << "\"" << std::endl;
            throw std::logic_error("");
        }
        // Move text "carrige"
        pos_index += sample.size();
        sample_vector.push_back(sample);
    }

    return sample_vector;
}
