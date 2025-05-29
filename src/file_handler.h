#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <string>

class FileHandler {
    private:
        std::string filepath;
        bool valid;

    public:
        bool fileExists(const std::string& filepath) const;

};

#endif // FILE_HANDLER_H
