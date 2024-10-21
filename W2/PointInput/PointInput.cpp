#include "PointInput.h"

Point :: Point(){
    _X=0;
    _Y=0;
}

void Point::input()
{
    cout << "Enter your 2 points:\n";
    cout << "Enter X: "; cin >> _X;
    cout << "Enter Y: "; cin >> _Y;
}

string Point::toString()
{
    stringstream ss;
    ss << "\n2 points that you have just entered are: \n" << _X << " ; " << _Y << endl;
    return ss.str();
}

