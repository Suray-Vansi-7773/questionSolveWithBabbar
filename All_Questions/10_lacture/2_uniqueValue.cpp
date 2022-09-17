#include <iostream>
using namespace std;
 
int functionname(int arr[], int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;

}
 
int main(){
int size = 7;
int arr[7] = {1,2,5,3,4,4,5};

cout<<functionname(arr, size);
    
}




