#include "ProductInput.h"

Product::Product() : _ID(""), _Name(""), _Price(0.0), _ExpiryDate() {}  

void Product::input() {
    cout << "Enter Product ID: ";
    cin >> _ID;
    cin.ignore();  

    cout << "Enter Product Name: ";
    getline(cin, _Name);

    cout << "Enter Product Price: ";
    cin >> _Price;

    cout << "Enter Expiry Date:\n";
    _ExpiryDate.input();  
}

string Product::toString() {
    return "Product ID: " + _ID + "\n" +
           "Product Name: " + _Name + "\n" +
           "Product Price: " + to_string(_Price) + "\n" +
           "Expiry Date: " + _ExpiryDate.toString() + "\n";
}