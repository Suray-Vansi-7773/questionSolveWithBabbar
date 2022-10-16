// Write a program in C to count the digits of a given number using recursion

#include <bits/stdc++.h>
using namespace std;

int functionname(int n, int total)
{

    if (n == 0)
    {
        return total;
    }
    total++;
    functionname(n / 10, total);
}

int main()
{
    int n = 51;
    int total = 0;

    cout << functionname(n, total);
}