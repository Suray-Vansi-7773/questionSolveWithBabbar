#include <iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int sum = -1;
    while (start <= end)
    {
        if (arr[mid] = key)
        {
            sum = mid;
        }
        else if (key < arr[mid])
        {
            start = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return sum;
}

int main()
{
    int arr[5] = {1, 2, 2, 4, 5};
    int size = 5;
    cout << firstOccurence(arr, 5, 2);
}