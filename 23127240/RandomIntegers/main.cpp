#include "main.h"
bool prime(int number)
{
    for (int i=2;i<=sqrt(number);i++)
    {
        if (number%i==0) return false;
    }
    return true;
}
int main()
{
    srand(time(0));
    int n=rand()%11+10;
    cout << "the random number n=" << n << "\n\n";
    vector<int> numbers;
    int number;
    cout << "Generation: ";
    for (int i=0;i<n;i++)
    {
        number=rand()%100 +1;
        numbers.push_back(number);
        cout << numbers[i] << " ";
    }
    cout << "\n\n";
    int odd=0, even=0;
    
    for (int i=0;i<numbers.size();i++)
    {
        if (numbers[i]%2==0)
            even++;
    }
    odd = numbers.size() - even;
    cout << "odd: " << odd << "     " << "even: " << even << "\n\n";

    cout << "prime numbers:";
    for (int i=0;i<numbers.size();i++)
    {
        if (prime(numbers[i]))
        cout << numbers[i] << " ";
    }
    return 0;
    
}