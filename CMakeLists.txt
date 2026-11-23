cmake_minimum_required(VERSION 3.16)
project(rob-run-radar CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robrunradar
    src/main.cpp
    src/mapper.cpp
    src/streamer.cpp
    src/overlay.cpp
)

target_include_directories(robrunradar PRIVATE include)

if(WIN32)
    target_link_libraries(robrunradar PRIVATE userenv)
endif()
