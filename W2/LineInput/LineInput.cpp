#include "LineInput.h"

Line :: Line(){
    _X1 = 0;
    _Y1 = 0;
    _X2 = 0;
    _Y2 = 0;
}
void Line::input() {
        std::cout << "=====================\n";
        std::cout << "Enter coordinates for the line:\n";
        std::cout << "=====================\n";
        std::cout << "Starting Point (X1, Y1):\n";
        std::cout << "Enter X1: ";
        std::cin >> _X1;
        std::cout << "Enter Y1: ";
        std::cin >> _Y1;

        std::cout << "\n=====================\n";
        std::cout << "Ending Point (X2, Y2):\n";
        std::cout << "Enter X2: ";
        std::cin >> _X2;
        std::cout << "Enter Y2: ";
        std::cin >> _Y2;

        std::cout << "\n=====================\n";
        std::cout << "You have entered:\n";
        std::cout << "Starting Point: (" << _X1 << ", " << _Y1 << ")\n";
        std::cout << "Ending Point: (" << _X2 << ", " << _Y2 << ")\n";
        std::cout << "=====================\n";
    }

    string Line::toString() {
        stringstream ss;
         ss << "Line from (" << _X1 << ", " << _Y1 << ") to (" << _X2 << ", " << _Y2 << ")\n";
         return ss.str();
    }


