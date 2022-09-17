// find unique value arr size [2M +1] here is M -> twince 

#include <bits/stdc++.h>
using namespace std;

 
int main(){
    int arr[5] = {1,1,4,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int xorVal = 0;
    for(int i = 0; i<=size-1; i++) {
        xorVal = xorVal^arr[i];
        
    }
    cout<<xorVal;
}