// #include <iostream>
// using namespace std;
 
// // int functionname(int arr[], int size){
// // int start = 0;
// // int end = size -1;
// // int mid = start + (end-start)/2;
// // while(start<=end){
// // }
// // }
 
 
// int main(){
// int size = 5;
// int arr[5] = {4,9,7,3,0};
// for(int i=1; i<size; i++){
//     for(int j = 0; j<size-i; j++){
//         if(arr[j] > arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }

// for(int i = 0; i<size; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
    
// }

#include <iostream>
using namespace std;
 
int main(){
    int size = 5;
    int arr[5] ={9,3,17,2,0};
    for(int i = 0; i<size;i++){
        // cout<<"first for loop";
        for(int j=0; j<size-i-1;j++){
            // cout<<"second for loop"<<endl;

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }

    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}