// swap alternative 
#include <bits/stdc++.h>
using namespace std;

int swapalter(int arr[], int size){
    for(int i = 0; i<=size-1; i= i+2){ // i = i+2 in this case we are moving next pair
        swap(arr[i], arr[i+1]);    
    }
}
 
int main(){
    int arr [6] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    swapalter(arr, size);
    for(int i = 0 ;i<=size-1; i++){
        cout<<arr[i];
    }
}