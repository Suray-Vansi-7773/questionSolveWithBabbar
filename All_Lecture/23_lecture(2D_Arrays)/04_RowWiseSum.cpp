#include <bits/stdc++.h>
using namespace std;
 
int rowWiseSum(int arr[][3], int n, int m){
    for(int i= 0; i<n; i++){
        int sum =0;
        for(int j = 0; j<m; j++){
            sum += arr[i][j];
        }
        cout<<"this is sum "<<sum<<endl;
    }

}


int main(){
int arr[3][3] = {1,3,5,7,9,2,3,4,4};
int n = 3;
int m = 3;

rowWiseSum(arr, n,m);
}