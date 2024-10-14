#include"../help.h"

int main() {
    
    std::time_t now = std::time(0);
    std::tm *ltm = std::localtime(&now);

    
    std::cout << "Current date (VN format): "
              << std::setfill('0') << std::setw(2) << ltm->tm_mday << "/"
              << std::setfill('0') << std::setw(2) << ltm->tm_mon + 1 << "/"
              << 1900 + ltm->tm_year << std::endl;

    
    ltm->tm_mday += 1; 
    std::mktime(ltm);  

    std::cout << "Next date (US format): "
              << std::setfill('0') << std::setw(2) << ltm->tm_mon + 1 << "/"
              << std::setfill('0') << std::setw(2) << ltm->tm_mday << "/"
              << std::setfill('0') << std::setw(2) << (ltm->tm_year % 100) << std::endl;

    return 0;
}