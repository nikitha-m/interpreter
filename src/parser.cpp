#include <vector>
#include <string>
#include <iostream>

class Parser {
public:
    Parser(const std::vector<std::string>& tokens);
    void parse();
    std::vector<std::string> getCommands() const;

private:
    std::vector<std::string> tokens;   // Input tokens
    std::vector<std::string> commands; // Parsed commands
};

Parser::Parser(const std::vector<std::string>& tokens) : tokens(tokens) {}

void Parser::parse() {
    // Combine tokens into commands
    std::string currentCommand;

    for (const auto& token : tokens) {
        std::cout << "Parsing: " << token << std::endl; // Debugging output
        if (token.find("print") == 0) {
            currentCommand = token; // Start a new command
        } else if (!currentCommand.empty()) {
            currentCommand += " " + token; // Append to the current command
            if (token.back() == '"') { // Check if the command ends with a quote
                commands.push_back(currentCommand); // Add the complete command
                currentCommand.clear(); // Clear for the next command
            }
        }
    }
}

std::vector<std::string> Parser::getCommands() const {
    return commands; // Return the parsed commands
}