//Write a program in C to find GCD of two numbers using recursion
#include <bits/stdc++.h>
using namespace std;

// using loop
// int functionname(int n1, int n2)
// {
//     if (n1 > n2)
//     {

//         for (int i = n2; i > 0; i--)
//         {
//             if (n1 / i && n2 / i)
//             {
//                 return  i ;
//                 break;
//             }
//         }
//     }
//     else
//     {
//         for (int i = n1; i > 0; i--)
//         {
//             if (n1 / i && n2 / i)
//             {
//                 return  i ;
//                 break;
//             }
//         }
//     }
// }

// using recursion
int func(int n1, int n2, int n3)
{
    if (n3 == 0)
    {
        return -1;
    }

    if (n1 / n3 && n2 / n3)
    {
        return n3;
    }

    func(n1, n2, n3 - 1);
}

int main()
{
    int n1 = 5;
    int n2 = 10;
    int n3 = 10;

    cout << func(n1, n2, n3);
}