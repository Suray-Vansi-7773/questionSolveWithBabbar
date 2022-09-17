#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(key == arr[i]){
            return 1;
        }
    }
        return 0;

}
 
int main(){
  
    int arr[10] = {1,2,3,4,5,6,7,8,9,0,};
    int key;
    cin>>key;
    int answer = linearSearch(arr, 10, key);

    if(answer){
        cout<<"this is present";
    }else{
        cout<<"this is absent";
    }

    
}