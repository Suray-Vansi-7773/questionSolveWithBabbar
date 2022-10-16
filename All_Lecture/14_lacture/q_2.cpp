// search in roted sorted array
#include <iostream>
using namespace std;
 
int pivot(int arr[], int size){
int start = 0;
int end = size -1;
int mid = start + (end-start)/2;
while(start<=end){
    if(arr[mid]<arr[mid +1]){
        start = mid +1;
    }else{
        end = mid;
    }
    mid = start + (end-start)/2;
}
}

int binary(int array[], int size){
    
}
 
 
int main(){
int size = 5;
int arr[5] = {7,9,1,2,3};
    
}