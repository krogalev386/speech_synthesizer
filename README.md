# speech_synthesizer
Simple speech synthesizer programm

# installation
First of all you need to install SDL2 library: https://wiki.libsdl.org/Installation
```
git clone https://github.com/libsdl-org/SDL
cd SDL
mkdir build
cd build
../configure
make
sudo make install
```

After can download this repo and install it via CMake:
```
git clone <this_repo>
mkdir build
cd build 
cmake ..
cmake --build .
```

and type ```./speech_synthesizer``` to play a demonstration
