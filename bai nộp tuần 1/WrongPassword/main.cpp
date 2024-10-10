#include "main.h"
void draw()
{
    std::cout << "*******************************\n";
    std::cout << "*          MAIN SCREEN        *\n";
    std::cout << "*                             *\n";
    std::cout << "* Welcome to the main menu!   *\n";
    std::cout << "*                             *\n";
    std::cout << "*******************************\n";
}
int main()
{
    string password = "I love OOP";
    int n = 3;
    int time = n;
    string your_pass;
    cout << "Enter password:";
    getline(cin, your_pass);
    if (password == your_pass)
    {
        draw();
        return 0;
    }

    for (int i = 1; i < n; i++)
    {

        if (password != your_pass)
        {
            time--;
            cout << "wrong password you have " << time << " more password attempts left\n";
            cout << "password:";
            getline(cin, your_pass);
        }
        if (password == your_pass)
        {
            draw();
            return 0;
        }
    }
    std::cout << "*******************************\n";
    std::cout << "*          QUIT SCREEN        *\n";
    std::cout << "*                             *\n";
    std::cout << "* Thank you for using the app!*\n";
    std::cout << "*                             *\n";
    std::cout << "*******************************\n";
}