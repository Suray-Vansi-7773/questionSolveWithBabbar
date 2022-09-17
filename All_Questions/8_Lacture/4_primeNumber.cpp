#include <iostream>
using namespace std;

int prime(int number)
{
    for (int i = 2; i < number; i++)
    {

        if (number % 2 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    if (prime(7))
    {
        cout << "this is prime number";
    }
    else
    {
        cout << "this is not a prime number ";
    }
    return 0;
}