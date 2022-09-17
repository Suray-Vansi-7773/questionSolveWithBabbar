//peek element in an mountain array 
#include <iostream>
using namespace std;

int peek(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = (start + (end-start))/2;
    while(start<end){
        if(arr[mid] < arr[mid + 1]){
            start = mid +1;
        }else{
            end = mid; 
        }
        mid = start + (end-start)/2;
    }
    return start;
    
}
 
int main(){
    int size = 5;
    int arr[5]= {1,2,3,4,3};
    cout<<"this is index number of peek element"<<endl<<peek(arr,size);
    
    
}