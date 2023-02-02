CMAKE_MINIMUM_REQUIRED(VERSION 3.14.4)
PROJECT(PONG.out)

SET(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(${PROJECT_NAME} )

target_link_libraries(PONG.out sfml-graphics sfml-audio)