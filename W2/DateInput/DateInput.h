#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Date{
private:
    int _Day;
    int _Month;
    int _Year;
public: 
    Date();
public: 
    void input();
    string toString();
};