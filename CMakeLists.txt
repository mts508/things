cmake_minimum_required(VERSION 2.6)
project(justme)

add_library(owl src/simple-window.cpp)

add_executable(justme main.cpp window.cpp)

target_link_libraries(justme GL)
target_link_libraries(justme SDL2)
target_link_libraries(justme owl)

install(TARGETS justme RUNTIME DESTINATION bin)
