// #include <iostream>
// using namespace std;

// int functionname(int arr[], int size,int key){
// int start = 0;
// int end = size -1;
// int mid = start + (end-start)/2;
// while(start<=end){
//     if(arr[mid] == key){
//         end = mid-1;

//     }else if(arr[mid]>key){
//         end = mid-1;
//     }else{
//         start = mid +1;
//     }
//      mid = start + (end-start)/2;
// }
// }

// int functionname2(int arr[], int size,int key){
// int start = 0;
// int end = size -1;
// int sum = -1;
// int mid = start + (end-start)/2;
// while(start<=end){
//     if(arr[mid] == key){
//         sum = mid;
//         start = mid +1;

//     }else if(arr[mid]>key){
//         end = mid-1;
//     }else if(arr[mid]<key){
//         start = mid +1;
//     }
//      mid = start + (end-start)/2;
// }
// return sum;
// }

// int main(){
// int size = 5;
// int arr[5] = {0,3,3,3,3};
// int key = 3;

// int b = functionname2(arr, size,key) -  functionname(arr, size,key) +1;
// // cout<<functionname(arr,size,key)<<endl;
// // cout<<functionname2(arr,size,key);
//     cout<<b;
// }

#include <iostream>
using namespace std;

int functionname(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
}

int main()
{
    int size = 6;
    int arr[6] = {0,1,10,4,3,2};
    cout << functionname(arr, size);
}