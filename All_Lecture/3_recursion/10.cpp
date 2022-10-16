
#include <bits/stdc++.h>
using namespace std;

bool functionname(int arr[], int start, int end, int key)
{
	if (start > end)
	{
		return false;
	}


	int mid = start + end / 2;

	if (arr[mid] == key)
	{
		return true;
	}
	if (arr[mid] < key)
	{
		return functionname(arr, mid + 1, end, key);
		
	}
	else
	{
		
		return functionname(arr, start, mid - 1, key);
	}
	return false;
}



// bool binarySearch(int *arr, int s, int e, int k)
// {

// 	// base case

// 	// element not found
// 	if (s > e)
// 		return false;

// 	int mid = s + (e - s) / 2;

// 	// element found
// 	if (arr[mid] == k)
// 		return true;

// 	if (arr[mid] < k)
// 	{
// 		return binarySearch(arr, mid + 1, e, k);
// 	}
// 	else
// 	{
// 		return binarySearch(arr, s, mid - 1, k);
// 	}
	
// }

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int size = 15;

	// cout<< binarySearch(arr, 0, size - 1, 5);
	if(functionname(arr, 0, size - 1, 5)){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}

