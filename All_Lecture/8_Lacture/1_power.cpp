#include <iostream>
using namespace std;

int power()
{

    int sum = 1;
     int firstNumber;
    int secondNumber;
    cin>>firstNumber>>secondNumber;

    for (int i = 1; secondNumber >= i; i++)
    {
        sum = sum * firstNumber;
    }

    return sum;
}

int main()
{
   
    int c = power();
    cout<<c;

}