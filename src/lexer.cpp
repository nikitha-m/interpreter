#include "interpreter.h"
#include <iostream>
#include <sstream>

Lexer::Lexer(const std::string& source) : sourceCode(source) {}

void Lexer::tokenize() {
    // Simple tokenization logic (for example purposes)
    std::stringstream ss(sourceCode);
    std::string token;
    while (ss >> token) {
        tokens.push_back(token);
    }
    // Print tokens for debugging
    for (const auto& token : tokens) {
        std::cout << "Token: " << token << std::endl;
    }
}

std::vector<std::string> Lexer::getTokens() const {
    return tokens;  // Return the tokens vector
}

