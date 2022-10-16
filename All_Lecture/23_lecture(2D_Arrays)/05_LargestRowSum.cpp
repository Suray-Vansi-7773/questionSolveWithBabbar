#include <bits/stdc++.h>
using namespace std;
 
int functionname(int arr[][3], int n, int m){
    int maxi = INT16_MIN;
    int indexrow = -1;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = 0; j<m; j++){
            sum += arr[i][j];
        }
        if(maxi<sum){
            maxi = sum;
            indexrow = i;
        }
    }
    return indexrow;


}

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
int arr[3][3] = {1,3,5,7,9,2,3,4,1};
int n = 3;
int m = 3;    

rowWiseSum(arr, n,m);

cout<<functionname(arr, n,m);
}