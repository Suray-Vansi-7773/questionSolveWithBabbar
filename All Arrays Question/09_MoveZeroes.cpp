// this is wrong
#include <bits/stdc++.h>
using namespace std;

int move(int arr[], int size)
{
    
    int i = 0;
    // int size1 = size-1;
    while (i != size)
    {

        if (arr[i] != 0 )
        {
            swap(arr[i], arr[i -1]);
           
        }
        i++;
        
        
        
    }
 
}

int main()
{
    int arr[5] = {0, 1, 2, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    move(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}