// Write a program in C to get the largest element of an array using recursion
#include <bits/stdc++.h>
using namespace std;

int functionname(int arr[], int size, int maxi)
{
    if(size ==0){
        return maxi;
    }
    if(maxi<arr[0]){
        maxi = arr[0];
    }
    functionname(arr+1, size-1, maxi);
}

int main()
{
    int arr[7] = {1001, 532, 432, 55, 3, 6, 1004};
    int size = 7;
    int maxi = 0;

    cout << functionname(arr, size, maxi);
}