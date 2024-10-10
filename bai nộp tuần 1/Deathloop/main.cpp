#include "main.h"

int main()
{
    string str;
    bool flag = false;
    while (!flag)
    {
        flag = true;
        cout << "Enter number:";
        getline(cin, str);
        cout << "\n";
        if (str.size() != 0)
        {
            for (int i = 0; i < str.size(); i++)
            {
                char ch = str[i];
                if (ch - '0' > 10 || ch - '0' < 0)
                {
                    flag = false;
                    cout << "The input is not in the correct format for an integer. Try again\n";
                    break;
                }
            }
            if (flag && (stoi(str) > 10 || stoi(str) < 1))
            {
                flag = false;
                cout << "The value is not in the correct domain. Try again\n";
            }
        }
        else
        {
            flag = false;
            cout << "The number is empty. Try again\n";
        }
    }
    return 0;
}