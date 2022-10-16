//   Write a program in C to print the array elements using recursion

#include <bits/stdc++.h>
using namespace std;
 
void functionname(int arr[], int size){
if(size==0){
    return ;
}
cout<<arr[0]<<endl;
functionname(arr+1, size-1);

}
 
 
int main(){
int arr[5]= {1,2,3,5,4};
int size = 5;
    
functionname(arr,size);
}