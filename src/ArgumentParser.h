#ifndef ARGUMENT_PARSER_H
#define ARGUMENT_PARSER_H

#include <string>

class ArgumentParser {
private:
    std::string command;
    std::string filepath;
    bool valid;

public:
    ArgumentParser(int argc, char* argv[]);
    
    bool isValid() const;
    std::string getCommand() const;
    std::string getFilepath() const;

    void showUsage(const std::string& programName) const;
    
}; 

#endif //ARGUMENT_PARSER_H:
