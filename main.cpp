#include "AudioLibrary.h"
#include "Reader.h"
#include "Speaker.h"

int main(){

    // Objects initialization
    AudioLibrary a_lib = AudioLibrary();
    Reader reader = Reader();
    Speaker speaker = Speaker();

    // Input text example
    std::string text = "babushka baaabushka mama papa pama mapa map pam";

    // Processing
    reader.load_samples(a_lib);
    speaker.play_samples(a_lib, reader.parse_text_by_samples(text));
}