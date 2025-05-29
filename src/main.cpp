#include "ArgumentParser.h"
#include "file_handler.h"
#include <iostream>

int main(int argc, char* argv[]) {
    ArgumentParser parser(argc, argv);

    if (!parser.isValid()) {
        parser.showUsage(argv[0]);
        return 1;
    }
    
    // Display parsed arguments
    std::cout << "Command: " << parser.getCommand() << std::endl;
    std::cout << "Filepath: " << parser.getFilepath() << std::endl;
    
    FileHandler filehandler;
    if (filehandler.fileExists(parser.getFilepath())) {
        std::cout << "File exists: YES" << std::endl;
    } else {
        std::cout << "File exists: NO" << std::endl;
    }
    
    return 0;
};
