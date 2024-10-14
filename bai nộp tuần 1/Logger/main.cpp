#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

void log(const std::string& message) {

    std::time_t now = std::time(0);
    std::tm *ltm = std::localtime(&now);

  
    char filename[20];
    std::strftime(filename, sizeof(filename), "log-%y%m%d.txt", ltm);


    std::ofstream logfile;
    logfile.open(filename, std::ios_base::app);


    if (logfile.is_open()) {
        logfile << message << std::endl;
        logfile.close();
    } else {
        std::cerr << "Không thể mở file log: " << filename << std::endl;
    }
}

int main() {
    log("Exception tại hàm export. Lí do: Invalid input exception");
    log("This is another log message.");
    log("hello");
    return 0;
}