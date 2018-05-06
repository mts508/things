cmake_minimum_required(VERSION 2.6)
project(justme)

file(GLOB owl_src "src/owl/*.cpp")
add_library(owl ${owl_src})

add_executable(justme src/main.cpp src/window.cpp)

target_link_libraries(justme GL)
target_link_libraries(justme SDL2)
target_link_libraries(justme owl)

install(TARGETS justme RUNTIME DESTINATION bin)
