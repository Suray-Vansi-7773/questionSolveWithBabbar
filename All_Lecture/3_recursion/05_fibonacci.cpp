// // fibonacci using recursion
// #include <bits/stdc++.h>
// using namespace std;

// int functionname(int k)
// {
//     if (k == 0)
//     {
//         return 0;
//     }
//     if (k == 1)
//     {
//         return 1;
//     }
//     return functionname(k - 1) + functionname(k - 2);
// }

// int main()
// {
//     int k = 8;

//     cout << functionname(k);
// }

// once more
#include <bits/stdc++.h>
using namespace std;

int functionname(int n)
{
    if (n == 0 )
    {
        return 0;
    }
    if (n == 1 || n == 2 )
    {
        return 1;
    }

   

    return functionname(n-1)+functionname(n-2);
}

int main()
{
    int n = 5;

    cout << functionname(n);
}