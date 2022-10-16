// in this create two array and match values is which value available or not

#include <bits/stdc++.h>
using namespace std;

// int  ArrayIntersection(int arr1[], int arr1size,int arr2[], int arr2size){
vector<int> ArrayIntersection(vector<int> arr1, int arr1size, vector<int> arr2,int arr2size)
{
    vector<int>arr3;
    for (int i = 0; i <= arr1size; i++)
    {
        int match = arr1[i];

        for (int j = 0; j <= arr2size; j++)
        {
            if (arr2[j] == match)
            {   arr3.push_back(match);
                arr2[j] = -17671;
                break;
            }
        }
    }
    return arr3;
    
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    int arr1size = arr1.size();

    vector<int> arr2 = {5, 6, 8};
    int arr2size = arr2.size();

    // for(auto i:arr1){
    //     cout<<arr1[i];
    // }

    ArrayIntersection(arr1, arr1size, arr2,arr2size);
}