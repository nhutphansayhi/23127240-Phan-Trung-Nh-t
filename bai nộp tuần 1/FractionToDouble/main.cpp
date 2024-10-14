#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream file("data.txt");  
    if (!file) {
        std::cerr << "Error: Cannot open data.txt" << std::endl;
        return 1;
    }

    std::string line;
    std::vector<int> numbers;

    std::cout << "Reading data.txt..." << std::endl;

    
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string temp;
        while (std::getline(ss, temp, ',')) {
            numbers.push_back(std::stoi(temp)); 
        }
    }

    file.close();

    // In số lượng các số tìm thấy
    std::cout << "Found " << numbers.size() << " numbers." << std::endl;

    // Sắp xếp các số theo thứ tự tăng dần
    std::sort(numbers.begin(), numbers.end());

    // In các số đã sắp xếp
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}