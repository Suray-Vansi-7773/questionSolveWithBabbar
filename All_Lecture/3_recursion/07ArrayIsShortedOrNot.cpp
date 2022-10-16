// arraya is shorted or not 

#include <bits/stdc++.h>
using namespace std;

bool functionname(int arr[], int n)
{
    if (n == 0)
    {
        return true;
    }
    if (n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remen = functionname(arr + 1, n - 1);
        return remen;
    }
}

int main()
{
    int arr[5] = {1, 12, 3, 4, 5};
    int size = 5;

    functionname(arr, size);
    if (functionname(arr, size))
    {
        cout << "yes it is shorted";
    }
    else
    {
        cout << "no this is not shorted";
    }
}