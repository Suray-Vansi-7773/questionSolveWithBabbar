//searching in a roteted array
#include <iostream>
using namespace std;
 

int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
 
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
 
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
 
    return binarySearch(arr, low, (mid - 1), key);
}

int pivot(int arr[], int low, int high)
{
   
    int mid = (low + high) / 2;
    while (start < end1)
    {
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end1 = mid;
        }
        mid = start + (end1 - start) / 2;
    }
    return start;
}

 
int main(){
int size = 5;
int arr[5] = {1,3,5,7,9};
    
}