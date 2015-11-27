cmake_minimum_required (VERSION 2.6)
add_definitions(-g3 -ftrack-macro-expansion=2)
include_directories(../include ../bfd)
project (Bfd_Shell)
add_executable(bfd_shell bfd_shell.cpp)
target_link_libraries(bfd_shell -L../bfd -L../libiberty -L../zlib -lreadline -lbfd -liberty -lz -ldl)

