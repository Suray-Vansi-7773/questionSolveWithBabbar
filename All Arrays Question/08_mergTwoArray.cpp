// This is not complete

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,0};
    int arr3[10] ={0};
    int k = 0;
    

    for(int i = 0; i<5;i++){
        arr3[k] = arr1[i] ;
        k++;
    }
    for(int i = 0; i<5;i++){
        arr3[k] = arr2[i] ;
        k++;
    }

    for(int i = 0; i<10; i++){
        cout<<arr3[i]<<" ";
    }
}







