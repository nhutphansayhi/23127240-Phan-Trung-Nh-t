#include"main.h"

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

    std::cout << "Found " << numbers.size() << " numbers." << std::endl;

    std::sort(numbers.begin(), numbers.end());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}