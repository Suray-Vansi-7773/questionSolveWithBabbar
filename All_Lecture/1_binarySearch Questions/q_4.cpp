// pivot value in an sorted array
//  #include <iostream>
//  using namespace std;
//  int pivot(int arr[], int size){
//      int start = 0;
//      int end1 = size -1;
//      int mid = start + (end1-start)/2;
//      while(start<end1){
//          if(arr[mid] >= arr[0] ){
//              start = mid + 1;

//         }else{
//             end1 = mid -1;
//         }
//         mid = start + (end1-start)/2;
//     }
//     return start;

// }

// int main(){
//     int arr[5] = {3,8,10,17,1};
//     int size = 5;
//     cout<<pivot(arr, size);
// }

// #include <iostream>
// using namespace std;

// int pivot(int arr[], int size){
//     int start = 0;
//     int end1 = size-1;
//     int mid = start + (end1-start)/2;

//     while(start<end1){
//         if(arr[mid]>=arr[0]){
//             start = mid +1;

//         }else{
//             end1 = mid;
//         }
//         mid = start + (end1-start)/2;
//     }
//     return start;

// }

// int main(){
//     int size = 5;
//     int arr[5] = {3,8,10,17,1};
//     cout<<pivot(arr,size);

// }

#include <iostream>
using namespace std;

int functionname(int arr[], int size)
{
    int start = 0;
    int end1 = size - 1;
    int mid = start + (end1 - start) / 2;
    while (start < end1)
    {
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end1 = mid;
        }
        mid = start + (end1 - start) / 2;
    }
    return start;
}

int main()
{
    int size = 5;
    int arr[5] = {3, 4, 5, 1, 2};
    cout<<functionname(arr, size);
}