#include "Speaker.h"
#include "AudioLibrary.h"
#include <SDL2/SDL.h>

void Speaker::play_samples(const AudioLibrary& lib, 
                           const std::vector<std::string>& samples){

    // Some semi-copypaste SDL2 magic
    for (auto sample : samples){
        SDL_Init(SDL_INIT_AUDIO);

        SDL_AudioSpec wavSpec;
        Uint32 wavLength;
        Uint8 *wavBuffer;
        std::string filename = lib.get_filename(sample);
        SDL_LoadWAV(filename.c_str(), &wavSpec, &wavBuffer, &wavLength);

        SDL_AudioDeviceID deviceId = SDL_OpenAudioDevice(NULL,0,&wavSpec,NULL,0);
        int success = SDL_QueueAudio(deviceId, wavBuffer, wavLength);
        SDL_PauseAudioDevice(deviceId, 0);
        SDL_Delay(100);
        SDL_CloseAudioDevice(deviceId);
        SDL_FreeWAV(wavBuffer);
        SDL_Quit();
    }

}