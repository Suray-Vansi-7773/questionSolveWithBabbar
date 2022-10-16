#include <bits/stdc++.h>
using namespace std;

// int WavePrint(int arr[][4], int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (i&1)
//         {
//             for (int j = m - 1; j >= 0; j--)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
        
//         else{
//             for (int j = 0; j < m; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
        
//     }
// }

// int main()
// {
//     // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
//     int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int n = 3;
//     int m = 4;
//     WavePrint(arr, n, m);
// }


int WavePrint(int arr[][4], int n, int m)
{
    for (int j = 0; j <= m; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i <= n-1; i++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; --i)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;
    int m = 4;
    WavePrint(arr, m, n);
}