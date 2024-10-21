#include "main.h"

void printDouble(const std::string& fraction) {
    
    size_t pos = fraction.find('/');
    
    
    int numerator = std::stoi(fraction.substr(0, pos));
    int denominator = std::stoi(fraction.substr(pos + 1));
    
    
    double result = static_cast<double>(numerator) / denominator;
    
    
    std::cout << std::fixed << std::setprecision(2) << result << std::endl;
}

int main() {
    
    printDouble("12/8");
    
    return 0;
}