#include <bits/stdc++.h>
using namespace std;

int reversed(int arr[], int size, int input){
    int start;
    cin >> start;
    int end = size - 1;
    while (start <= end){
        swap(arr[start++], arr[end--]);
    }
}

int main(){
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "type here to number there you change ";
    int input;

    reversed(arr, size, input);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}