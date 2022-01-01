cmake_minimum_required(VERSION 3.16)
project(lab1)
add_subdirectory(src)

add_executable(lab1 src/main.cpp)

target_compile_features(lab1 PUBLIC cxx_std_17)

target_link_libraries(lab1 src libs)



