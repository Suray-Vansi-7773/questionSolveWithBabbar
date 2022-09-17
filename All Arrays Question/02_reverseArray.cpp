// reverse an array

#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[10] = {12,32,43,32,11,10,4,7,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    for(int i = 0; i<=size-1; i++){
        cout<<"this is reversed number "<<arr[i]<<endl;
    }
    
}