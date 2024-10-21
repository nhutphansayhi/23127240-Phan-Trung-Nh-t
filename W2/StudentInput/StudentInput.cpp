#include "StudentInput.h"
// #include "../DateInput/Date.h"

Student ::Student()
{
    _ID = "";
    _Fullname = "";
    _Address = "";
    _Email = "";
    _DOB = Date();
}
void Student::input() {
        cout << "Enter Student ID: ";
        cin >> _ID;
        cin.ignore(); 
        
        cout << "Enter Full Name: ";
        getline(cin, _Fullname);

        cout << "Enter Address: ";
        getline(cin, _Address);

        cout << "Enter Email: ";
        getline(cin, _Email);

        cout << "Enter Date of Birth:\n";
        _DOB.input();
    }

string Student::toString() {
    stringstream ss;
    ss << "ID: " << _ID << "\n";
    ss << "Full Name: " << _Fullname << "\n";
    ss << "Address: " << _Address << "\n";
    ss << "Email: " << _Email << "\n";
    ss << "Date of Birth: " << _DOB.toString() << "\n";  

    return ss.str();  
}