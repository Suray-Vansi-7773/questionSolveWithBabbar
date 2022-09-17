#include <iostream>
using namespace std;
int firstOccurenceStart(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int sum = -1;
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            sum = mid;
            end = mid-1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return sum;
}
int firstOccurenceEnd(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int sum = -1;
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            sum = mid;
            start = mid+1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
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
    int arr[5] = {1, 2, 3, 4, 4};
    
    cout << firstOccurenceStart(arr, 5, 4);
    cout << firstOccurenceEnd(arr, 5, 4)<<endl;
    cout<<"total number of occurence"<<(firstOccurenceEnd(arr,5,4)-firstOccurenceStart(arr,5,4))+1;
}
