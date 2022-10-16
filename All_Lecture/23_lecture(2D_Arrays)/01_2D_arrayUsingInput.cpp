//  initialize 2D array
// take input and print this

// print 1 2 3
//   4 5 6
//  7 8 9

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[3][3];

//     for(int row = 0; row<3; row++){
//         for(int column = 0; column<3; column++){
//             cin>>arr[row][column];
//         }
//     }

//      for(int row = 0; row<3; row++){
//         for(int column = 0; column<3; column++){
//             cout<<arr[row][column]<<" ";
//         }
//         cout<<endl;
//     }

// }

// print this type
//  1 4 7
//  2 5 8
//  3 6 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int column = 0; column < 3; column++)
    //     {
    //         cin >> arr[row][column];
    //     }
    // }

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << arr[column][row] << " ";
        }
        cout << endl;
    }
}