#include"main.h"

int main() {
    const char* months[] = {
        "January", "February", "March", "April", "May", "June", 
        "July", "August", "September", "October", "November", "December"
    };

    std::time_t now = std::time(0);
    std::tm *ltm = std::localtime(&now);

    std::cout << months[ltm->tm_mon] << " "
              << ltm->tm_mday << getOrdinal(ltm->tm_mday) << ", "
              << (1900 + ltm->tm_year) << std::endl;

    return 0;
}