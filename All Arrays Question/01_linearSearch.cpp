// find k is available or not 

#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int size, int key){
    for(int i = 0; i<=size; i++){
        if(key==arr[i]){
           return i;
        }return -1;
    }
    

}
 
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    cout<<search(arr,size,key);
}