#include "DateInput.h"


Date::Date()
{
    _Day=1;
    _Month=1;
    _Year=1;
}
void Date::input()
{
    std::cout << "=====================\n";
    std::cout << "Enter the date:\n";
    std::cout << "=====================\n";
    std::cout << "Day (DD): ";
    std::cin >> _Day; // Using renamed variable
    std::cout << "Month (MM): ";
    std::cin >> _Month; // Using renamed variable
    std::cout << "Year (YYYY): ";
    std::cin >> _Year; // Using renamed variable

    std::cout << "=====================\n";
}

string Date::toString()
{
    return "Date: " + to_string(_Day) + ", Month: " + to_string(_Month) + ", Year: " + std::to_string(_Year);
}