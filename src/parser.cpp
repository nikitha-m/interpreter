#include "interpreter.h"
#include <iostream>

Parser::Parser(const std::vector<std::string>& tokens) : tokens(tokens) {}

void Parser::parse() {
    // Simple parsing logic (example)
    for (const auto& token : tokens) {
        std::cout << "Parsing: " << token << std::endl;
    }
}
