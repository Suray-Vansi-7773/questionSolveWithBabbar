// swap using recursion

#include <bits/stdc++.h>
using namespace std;
 
int functionname(int arr[], int start, int end){
if(start>end){
    return 0;
}
// swap(arr[0], arr[size-1]);
int temp = 0; 
temp = arr[start];
arr[start]= arr[end];
arr[end]= temp;
// cout<<"this is temp "<<temp<<endl;
return functionname(arr, start+1,end-1);

}
 
 
int main(){
int arr[5] = {1,2,3,4,5};

    
functionname(arr,0,4);
for(int i = 0; i<5; i++){
    cout<<arr[i]<<" ";
}
// for(auto i:arr){
//     cout<<arr[i]<<" ";
// }
}