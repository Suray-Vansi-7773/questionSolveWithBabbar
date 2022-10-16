// Write a program in C to get the largest element of an array using recursion
#include <bits/stdc++.h>
using namespace std;

int maxifunc(int arr[], int size, int maxi)
{
    if(size ==0){
        return maxi;
    }
    if(maxi<arr[0]){
        maxi = arr[0];
    }
    maxifunc(arr+1, size-1, maxi);
}
int minifunc(int arr[], int size, int mini)
{
    if(size ==0){
        return mini;
    }
    if(mini>arr[0]){
        mini = arr[0];
    }
    minifunc(arr+1, size-1, mini);
}


int main()
{
    int arr[7] = {10, 532, 432, 55, 3, 10, 1};
    int size = 7;
    int maxi = 0;
    int mini = arr[0];

    cout<<"This is max :- " << maxifunc(arr, size, maxi)<<endl;
    cout <<"This is min :- "<< minifunc(arr, size, mini);
}