﻿# Value Define
set(PROJECT_NAME TextEditor)

# Cpp Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Library
link_libraries(Rut)

# Current Project
project("${PROJECT_NAME}")
add_executable(${PROJECT_NAME} "main.cpp")