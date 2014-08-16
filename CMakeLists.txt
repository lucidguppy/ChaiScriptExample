cmake_minimum_required (VERSION 2.8)
add_definitions(-std=c++11)
project (ChaiTutorial)

add_library(myModule SHARED myModule.cpp)
install(TARGETS myModule DESTINATION /usr/local/lib/chaiscript)