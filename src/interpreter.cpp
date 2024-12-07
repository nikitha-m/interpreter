#include "interpreter.h"
#include <iostream>

Interpreter::Interpreter(Parser* parser) : parser(parser) {}

void Interpreter::interpret() {
    parser->parse();
    std::cout << "Interpreting the program..." << std::endl;

    // Get the commands from the parser
    std::vector<std::string> commands = parser->getCommands();

    for (const auto& command : commands) {
        std::cout << "Command: '" << command << "'" << std::endl; // Debugging output

        if (command.find("print") == 0) { // Check if the command starts with "print"
            // Check if the command has the correct format
            if (command.size() >= 8 && command[5] == ' ' && command[6] == '"') {
                // Extract the message to print
                std::string message = command.substr(7, command.size() - 8); // Remove 'print "' and '"'
                std::cout << message << std::endl; // Print the message
            } else {
                std::cerr << "Error: Invalid print command format." << std::endl;
            }
        }
    }
}