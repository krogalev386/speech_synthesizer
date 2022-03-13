#include "AudioLibrary.h"

AudioLibrary::AudioLibrary(){
    library = std::map<std::string, std::string>();
    add_sample("a","../samples/a.wav");
    add_sample("b","../samples/b.wav");
    add_sample("u","../samples/u.wav");
    add_sample("e", "../samples/e.wav");
    add_sample("ba","../samples/ba.wav");
    add_sample("bu","../samples/bu.wav");
    add_sample("sh","../samples/sh.wav");
    add_sample("ka","../samples/ka.wav");
    add_sample("ma","../samples/ma.wav");
    add_sample("pa","../samples/pa.wav");
    add_sample("m","../samples/m.wav");
    add_sample("p","../samples/p.wav");
    add_sample(" ", "../samples/silence.wav");
};

std::vector<std::string> AudioLibrary::get_samples() const {
    std::vector<std::string> result_vector;
    for (auto pair : library){
        result_vector.push_back(pair.first);
    }
    return result_vector;
};

void AudioLibrary::add_sample(const std::string & sample, const std::string & filename){
    library.emplace(std::make_pair(sample, filename));
};

std::string AudioLibrary::get_filename(const std::string & sample) const {
    return library.at(sample);
};
