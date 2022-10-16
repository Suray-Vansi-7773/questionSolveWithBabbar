// sum of array
#include <bits/stdc++.h>
using namespace std;

int functionname(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int sum2 = functionname(arr + 1, size - 1);
    int sum = sum2 + arr[0];

    return sum;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << functionname(arr, size);
}