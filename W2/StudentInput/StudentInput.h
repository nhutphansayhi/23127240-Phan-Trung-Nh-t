#include <iostream>
#include <string>
#include <sstream>
#include "../DateInput/DateInput.h"
using namespace std;

class Student{
private:
    string _ID;
    string _Fullname;
    string _Address;
    string _Email;
    Date _DOB;
public: 
    Student();
public: 
    void input();
    string toString();
};

    // - ID: a string to represent the student’s id
// - Fullname: a string
// - Address: a string
// - Email: a string
// - DOB: a Date to represent the student’s date of birth