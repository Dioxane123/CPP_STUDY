# Version 3
cmake_minimum_required(VERSION 3.10)

project(test)

aux_source_directory(./src DIR_SRC)

# include the header files
include_directories(./include)

add_executable(test ${DIR_SRC})