cmake_minimum_required(VERSION 3.25)
project(creature C)

enable_testing()

add_library(creature src/model/model.c)
target_include_directories(creature PUBLIC src)

add_subdirectory(tests/)
add_subdirectory(src/compute/)
