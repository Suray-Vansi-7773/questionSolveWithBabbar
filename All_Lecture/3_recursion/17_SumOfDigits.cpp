//Write a program in C to find the sum of digits of a number using recursion
#include <bits/stdc++.h>
using namespace std;

int functionname(int n, int total)
{

    if (n == 0)
    {
        return total;
    }
    int reminder = n%10;
    total = total + reminder;
    functionname(n / 10, total);
}

int main()
{
    int n = 51;
    int total = 0;

    cout << functionname(n, total);
}