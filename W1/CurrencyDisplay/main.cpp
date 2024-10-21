#include"main.h"

int main()
{
    cout << "Enter your money(VNĐ):\n";
    float money;
    cin >> money;
    cout << money << "đ = $" << (float) money/25500 << endl;
    return 0;
}