// find dublicate in a array using bit manupulation

#include <bits/stdc++.h>
using namespace std;
 
int findDublicate(int arr[], int size){
    int ans = 0;
    for(int i =0; i<=size; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<=size; i++){
        ans = ans^i;
    }
    return ans;
}
 
 
int main(){
int arr[5] = {1,3,5,7,7};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<findDublicate(arr, size);
    
}