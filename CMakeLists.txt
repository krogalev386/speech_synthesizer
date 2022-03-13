cmake_minimum_required(VERSION 3.8)
project(speech_synthesizer LANGUAGES CXX)

cmake_policy(SET CMP0076 NEW)

find_package(SDL2 REQUIRED)

include_directories(speech_synthesizer
    ${SDL2_INCLUDE_DIRS}
)

add_executable(speech_synthesizer
    main.cpp
)

target_link_libraries(speech_synthesizer ${SDL2_LIBRARIES})

add_subdirectory(${PROJECT_SOURCE_DIR}/src)