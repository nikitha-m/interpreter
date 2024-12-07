#include "interpreter.h"
#include <iostream>
#include <string>

int main() {
    std::string sourceCode;
    std::cout << "Enter code: ";
    std::getline(std::cin, sourceCode);
    
    Lexer lexer(sourceCode);
    lexer.tokenize();
    
    Parser parser(lexer.getTokens());
    Interpreter interpreter(&parser);
    interpreter.interpret();
    
    return 0;
}
