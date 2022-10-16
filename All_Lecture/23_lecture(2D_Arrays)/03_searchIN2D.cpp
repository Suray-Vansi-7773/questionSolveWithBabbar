#include <bits/stdc++.h>
using namespace std;

bool func(int arr[][3], int n, int m, int key){
    for(int i = 0; i<n;i++){
        for(int j = 0; i<m; j++){
            if(key == arr[i][j]){
                return 1;
            }else{
                return 0;
            }
        }
    }
}
 
int main(){
    int arr[3][3]= {1,2,3,4,5,6,7,8,9};
    int n = 3;
    int m = 3;
    int key = 15;
    if(func(arr,n,m,key)==1){
        cout<<"value is available";
    }else{
        cout<<"value is not available";
    }


}