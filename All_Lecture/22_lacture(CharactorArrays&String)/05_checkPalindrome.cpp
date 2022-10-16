#include <bits/stdc++.h>
using namespace std;


bool Palindrome(char arr[], int k)
{
    int start = 0;
    int end = k - 1;
    // for (int i = 0; i < k; i++)
    while(start<=end)
    {
        if (arr[start] != arr[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int forLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[10];
    cin >> arr;
    int k = forLength(arr);
    cout << k << " This is length of arr" << endl;
    cout << Palindrome(arr,k) << " This is palindrome value" << endl;
}