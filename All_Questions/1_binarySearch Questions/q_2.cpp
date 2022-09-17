// first and last occurance position of an elemnt in sorted array

#include <iostream>
using namespace std;
int position(int arr[], int size, int key){
     int start = 0;
    int end = size - 1;
    int sum = -1;
    int mid = (start + end) / 2;
    while (start <= end){
        if(key==arr[mid]){
            sum = mid;
            end = mid-1;

        }
        else if (key>arr[mid])
        {
            start= mid +1;
        }else{
            end = mid-1;
        }
        mid = (start + end) / 2;

    }
    return sum ;
}
int position2(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int sum = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            sum = mid;
            start = mid + 1;
        }
       else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return sum;
}

int main()
{
    int size = 5;
    int arr[5] = {1, 3, 3, 3, 5};
    int key = 3;
    cout<<position(arr,size,key)<<endl;
    cout << position2(arr, size, key);
}