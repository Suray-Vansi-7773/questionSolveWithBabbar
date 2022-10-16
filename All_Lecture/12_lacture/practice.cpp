#include <iostream>
using namespace std;

int binarysearch(int arr[],int size, int key)
{
    ;
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key){
            return mid;
        }
        if (arr[mid] > key){
            e = mid - 1;
        }

        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main(){
    int size = 6;
    int arr[6] = {3, 7, 11, 3, 19, 27};
    int key = 7;
    cout<<binarysearch(arr,size,key);

}