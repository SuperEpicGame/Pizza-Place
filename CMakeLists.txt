cmake_minimum_required(VERSION 3.20)
project(MySDLApp C)

set(CMAKE_C_STANDARD 11)

set(SDL3_DIR "D:/SDL/SDL3/cmake/") #My directory

find_package(SDL3 REQUIRED)

add_executable(my_app main.c src/background.c)

target_link_libraries(my_app PRIVATE SDL3::SDL3)