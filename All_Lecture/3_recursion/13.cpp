// max value in this array 
// this is not complete yet !
#include <bits/stdc++.h>
using namespace std;

int functionname(int arr[], int size)
{

    if (size == 1)
    {
        return arr[0];
    }

    functionname(arr + 1, size - 1);
    return max(arr[0], arr[size -1]);
}

int main()
{
    int arr[5] = {1, 2, 13, 5, 1};
    int size = 5;

    cout << functionname(arr, size);
}