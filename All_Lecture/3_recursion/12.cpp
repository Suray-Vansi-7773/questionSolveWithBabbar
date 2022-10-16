// swap alternate number in array using recursion
#include <bits/stdc++.h>
using namespace std;

void functionname(int *arr, int size)
{
    if (size == 1)
    {
        return;
    }
    if (size == 0)
    {
        return;
    }

    swap(arr[0], arr[1]);
    return functionname(arr + 2, size - 2);
}

int main()
{
    int size = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};

    functionname(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}