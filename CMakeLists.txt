cmake_minimum_required(VERSION 3.10)
project(SimpleInterpreter)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Add source files
add_executable(interpreter
    src/main.cpp
    src/lexer.cpp
    src/parser.cpp
    src/interpreter.cpp
)
