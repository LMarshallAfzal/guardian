#include "file_handler.h"

#include <unistd.h> 

bool FileHandler::fileExists(const std::string& filepath) const {
    return ( access( filepath.c_str(), F_OK ) != -1);
}

