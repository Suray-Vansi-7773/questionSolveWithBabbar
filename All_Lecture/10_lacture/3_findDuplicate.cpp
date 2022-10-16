#include <iostream>
using namespace std;

int functionname(int arr[], int size){
    int ans = 0;
    for(int i = 1; i<size; i++){
        ans = ans^arr[i]^i;
    }
    return ans;

}

int main(){
int size = 5;
int arr[5] = {1,3,5,3,9};
cout<<functionname(arr,size);

}
