CMAKE_MINIMUM_REQUIRED(VERSION 3.14.4)
PROJECT(PONG.out)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 ")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

include_directories(inc)

set(HEADER_FILES inc/pgh.h)
set(SOURCES src/main.cpp src/menu.cpp src/start.cpp)

add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCES})

target_link_libraries(PONG.out sfml-graphics sfml-audio)