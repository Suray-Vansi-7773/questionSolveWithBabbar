// #include <bits/stdc++.h>
// using namespace std;

// int forlength(char a[]){
//     int length = 0;
//     for(int i =0; a[i]!='\0';i++){
//         length++;
//     }
//     return length;
// }

// char revers(char a[], int size){
//     int k = forlength(a);
//     for(int i = 0;
//     i<k;i++){
//         swap(a[i++],a[k--] );
//     }

// }

// int main(){
// char a[15];
// cin>>a;
// cout<<a<<endl;
// char k = forlength(a);

// cout<<a;

// }

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

int length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


// char revers(char arr[],int k){
//     int start = 0;
//     int end = k-1;
//     while(start<=end){
//         swap(arr[start++], arr[end--]);
//     }

// }

int main()
{
    char arr[10];
    cin >> arr;

    int k = length(arr);
    cout<<"this is length of given array"<<k <<endl;
    cout << "this is palindrome " <<Palindrome(arr, k)<<endl;
    // revers(arr, k);
    // cout<<"this is a array"<<arr<<endl;
  
}
