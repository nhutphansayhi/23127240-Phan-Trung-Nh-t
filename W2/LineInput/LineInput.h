#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Line{
private:
    float _X1;
    float _Y1;
    float _X2;
    float _Y2;
public: 
    Line();
public: 
    void input();
    string toString();
};