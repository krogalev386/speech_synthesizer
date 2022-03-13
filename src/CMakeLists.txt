target_include_directories(speech_synthesizer
PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_sources(speech_synthesizer
PUBLIC
    AudioLibrary.cpp
    Reader.cpp
    Speaker.cpp
)