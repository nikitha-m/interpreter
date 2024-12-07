#include "interpreter.h"
#include <iostream>

Interpreter::Interpreter(Parser* parser) : parser(parser) {}

void Interpreter::interpret() {
    parser->parse();
    // Simple interpretation logic (for now, just print tokens)
    std::cout << "Interpreting the program..." << std::endl;
    // Add more execution logic here as needed
}
