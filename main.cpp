#include "AudioLibrary.h"
#include "Reader.h"
#include "Speaker.h"
#include "DataLoader.h"

int main(int argc, char* argv[]){

    // Objects initialization
    AudioLibrary a_lib = AudioLibrary();
    Reader reader = Reader();
    Speaker speaker = Speaker();
    DataLoader dl = DataLoader();

    // Input text example
    std::string text = dl.load_text(argv[1]);

    // Processing
    reader.load_samples(a_lib);
    speaker.play_samples(a_lib, reader.parse_text_by_samples(text));
}