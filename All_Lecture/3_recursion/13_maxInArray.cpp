// max value in this array 
// this is not complete yet !
#include <bits/stdc++.h>
using namespace std;

int functionname(int arr[], int size, int maxi)
{

    if (size == 0)
    {
        return maxi;
    }
    if(maxi<arr[0]){
        maxi = arr[0];
    }

    functionname(arr + 1, size-1, maxi);
    
}

int main()
{
    int arr[5] = {1, 2, 13, 5, 1};
    int size = 5;
    int maxi = 0;

    cout << functionname(arr, size, maxi);
}