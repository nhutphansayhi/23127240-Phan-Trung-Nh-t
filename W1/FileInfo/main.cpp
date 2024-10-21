#include"main.h"

void parsePath(const std::string& path) {
    
    size_t lastSlashPos = path.find_last_of("\\/");

    
    size_t lastDotPos = path.find_last_of('.');

    
    std::string folder = path.substr(0, lastSlashPos);

    
    std::string filename = path.substr(lastSlashPos + 1);

    
    std::string extension = (lastDotPos != std::string::npos) ? path.substr(lastDotPos + 1) : "";

    
    std::cout << "Folder: " << folder << std::endl;
    std::cout << "Filename: " << filename << std::endl;
    std::cout << "Extension: " << extension << std::endl;
}

int main() {
    std::string path = "C:\\Windows\\Dev\\data.rar";  

 
    parsePath(path);

    return 0;
}