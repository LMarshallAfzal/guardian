#include "ArgumentParser.h"
#include <iostream>

// Constructor implementation
ArgumentParser::ArgumentParser(int argc, char* argv[]) 
{
    command = argv[1];
    filepath = argv[2];

    if (command == "encrypt" || command == "decrypt") {
        valid = true;
    }
}

bool ArgumentParser::isValid() const {
    return valid;
}

std::string ArgumentParser::getCommand() const {
    return command;
}

std::string ArgumentParser::getFilepath() const {
    return filepath;
};

void ArgumentParser::showUsage(const std::string& programName) const {
    std::cout << "Usage: " << programName << " <command> <filepath>" << std::endl;
    std::cout << "Commands:" << std::endl;
    std::cout << " encrypt  Encrypt the specified file" << std::endl;
    std::cout << " decrypt  Decrypt the specified file" << std::endl;
    std::cout << "Example: " << programName << " encrypt /path/to/file.txt" <<std::endl;
}
