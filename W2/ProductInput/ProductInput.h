#include <iostream>
#include <string>
#include <sstream>
#include "../DateInput/DateInput.h"
using namespace std;

class Product {
private:
    string _ID;
    string _Name;
    float _Price;
    Date _ExpiryDate; 

public:
    Product();  

    void input();
    string toString(); 
};