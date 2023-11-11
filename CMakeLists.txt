cmake_minimum_required(VERSION 3.20)
project(main CXX)

include_directories(include)

aux_source_directory(src SRCS)
aux_source_directory(include INC)

add_executable(${PROJECT_NAME} ${SRCS} ${INC})