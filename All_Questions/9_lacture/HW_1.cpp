//  input -- 5
//             {2,7,1,-4,11}
// output -- sum 17

// print sum of all elements in an array

#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;

}
 
int main(){
    int input;
     cin>>input;
    int arr[100];

    for(int i = 0; i<input; i++){
        cin>>arr[i];
    }

    cout<<sumOfArray(arr, input);
}