// find keys index number  in this array using log(n) time complexity

#include <iostream>
using namespace std;

int findindex(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 5;
    cout << findindex(arr, size, key);
}