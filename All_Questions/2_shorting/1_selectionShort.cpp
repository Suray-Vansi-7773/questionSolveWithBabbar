// // short an array using selection shorting 
// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int arr[5] = {1, 3, 1, 9, 0};

//         for(int i = 0; i<size; i++){
//         cout<<arr[i] <<" ";
//         cout<<endl;
//     // cout<<arr;
//     for(int i = 0; i<size-1; i++){
//         for(int j = i+1; j<size; j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

//     for(int i = 0; i<size; i++){
//         cout<<arr[i] <<" ";
//     }
// }



#include <iostream>
using namespace std;
 
int main(){
    int size = 5; 
    int arr[5] = {15,11,7,2,13};
    for(int i = 0; i <size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i] << " ";
    }
}