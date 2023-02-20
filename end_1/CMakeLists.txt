cmake_minimum_required(VERSION 3.10)
project(end_1)

message(STATUS "Compiler")
message(STATUS " - ID\t: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS " - Version\t: ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS " - Path\t: ${CMAKE_CXX_COMPILER}")

add_executable (program main.cc example.cc)
add_subdirectory(func)
target_link_libraries (program ${CMAKE_THREAD_LIBS_INIT} func)

find_package (Threads REQUIRED)

set(THREADS_PREFER_PTHREAD_FLAG ON)
