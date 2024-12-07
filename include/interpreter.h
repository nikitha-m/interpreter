#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <string>
#include <vector>

class Lexer {
public:
    explicit Lexer(const std::string& source);
    void tokenize();
    std::vector<std::string> getTokens() const;  // Add this line
private:
    std::string sourceCode;
    std::vector<std::string> tokens;
};

class Parser {
public:
    explicit Parser(const std::vector<std::string>& tokens);
    void parse();
private:
    std::vector<std::string> tokens;
};

class Interpreter {
public:
    explicit Interpreter(Parser* parser);
    void interpret();
private:
    Parser* parser;
};

#endif // INTERPRETER_H
