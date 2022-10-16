// pivot value in an array
#include <iostream>
using namespace std;
 
int pivot(int arr[], int size){
int start = 0;
int end = size -1;
int mid = start + (end-start)/2;
while(start<end){
    if(arr[mid]<arr[mid +1]){
        start = mid +1;
    }else{
        end = mid;
    }
    mid = start + (end-start)/2;
}
}
 
 
int main(){
int size = 5;
int arr[5] = {1,3,4,5,1};
cout<<pivot(arr,size);

    
}