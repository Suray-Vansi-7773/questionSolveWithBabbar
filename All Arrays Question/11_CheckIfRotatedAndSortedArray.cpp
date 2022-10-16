#include <bits/stdc++.h>
using namespace std;


bool checkrotatedAndSortedArray(int arr[], int size){
    int count = 0;
    for(int i = 1; i<size; i++){
        if(arr[i-1] > arr[i]){
        count++;
        }
    }
    if(arr[size-1]>arr[0]){
        count++;
    }
    
    return count<=1;
}

int main(){
    int arr[5]= {3,6,5,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<checkrotatedAndSortedArray(arr, size);
}