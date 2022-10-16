// linear search using recursion
#include <bits/stdc++.h>
using namespace std;

bool functionname(int arr[], int size, int k)
{
    if (size == 0)
    {
        return false;

    }
    if(arr[0]==k){
        return true;
    }else{
        return functionname(arr+1, size-1, k);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int k = 1;

    if(functionname(arr,size,k)){
        cout<<"present";
    }else{
        cout<<"absent";
    }
}