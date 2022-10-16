#include <bits/stdc++.h>
using namespace std;

// my own method
// int functionname(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;
//     while (start <= end)
//     {

//         swap(arr[start++], arr[end--]);
//     }
// }
// 

// int func2(int arr[], int size, int k)
// {
//     cin >> k;

//     int start = 0;
//     int end = size - (k + 1) ;

//     while (start <= end)
//     {

//         swap(arr[start++], arr[end--]);
//     }
// }

// int func3(int arr[], int size, int k)
// {
//     cin >> k;
//     int start = size - k;
//     // cout<<"this is start"<<start<<endl;
//     int end = size - 1;
//     while (start <= end)
//     {
//         swap(arr[start++], arr[end--]);
//     }
// }
// int main()
// {
//     int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; //  5, 7, 9,11,13,15,17,19,1,3
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int a;

//     functionname(arr, size);
//     func2(arr, size, a);
//     func3(arr, size, a);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// short way

// int mainfnc(int arr[], int size, int k){
//     int temp[size];
//     cin>>k;
//     for(int i = 0; i<size; i++){
//         temp[(i+k)%size] = arr[i];
//     }
//     for(int i =0; i<size; i++){

//         arr[i] = temp[i];
//     }

// }

void reverse(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int mainfnc(int arr[], int size, int k){
    cin>>k;
    k = k%size;
    reverse(arr,0,k-1);
reverse(arr,k, size-1);
    reverse(arr,0,size-1);
}


int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; //  5, 7, 9,11,13,15,17,19,1,3
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    mainfnc(arr,size,k);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

