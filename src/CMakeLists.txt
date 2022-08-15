cmake_minimum_required(VERSION 3.22)

set(SOURCES
        main.cpp
        cpu.cpp
        ram.cpp
        disk.cpp
        gpu.cpp
        kbd.cpp
        )
set(HEADERS
        ${MY_INCLUDE_DIR}/ram.h
        ${MY_INCLUDE_DIR}/cpu.h
        ${MY_INCLUDE_DIR}/cpu.h
        ${MY_INCLUDE_DIR}/disk.h
        ${MY_INCLUDE_DIR}/gpu.h
        ${MY_INCLUDE_DIR}/kbd.h
        )
add_executable(computer_simulator ${SOURCES} ${HEADERS})
target_include_directories(computer_simulator PUBLIC ${MY_INCLUDE_DIR})