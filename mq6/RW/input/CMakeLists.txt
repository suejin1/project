# /input/CMakeLists.txt

add_library(input STATIC input.cc)

target_include_directories(input PUBLIC /includes ${CMAKE_SOURCE_DIR})

target_compile_options(input PRIVATE -Wall -Werror)

target_compile_options(input PRIVATE pthread)