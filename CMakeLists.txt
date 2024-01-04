cmake_minimum_required(VERSION 3.22.1)
project(first_one)
set(SRC_file SCR/add.c SCR/sub.c SCR/div.c SCR/mult.c)
add_executable(first.elf main.c ${SRC_file})
target_include_directories(first.elf INTERFACE INCLUDE)
message(STATUS ${SRC_file})
set(MAKE_HOME_DIRECTORY /home/eman/iti/calc_Cmake)
add_subdirectory(${MAKE_HOME_DIRECTORY}/SCR)
target_link_libraries(first.elf PUBLIC operation)




