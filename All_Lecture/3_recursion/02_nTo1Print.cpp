// nTo1Print using recursion

#include <bits/stdc++.h>
using namespace std;

// void functionname(int n){
// if(n==0){
//     return ;
// }
// //  cout<< n<<endl;
//  functionname(n-1);
//  cout<< n<<endl;
// }

void func(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    func(n - 1);
}

int main()
{
    int n = 5;
     func(n);

    // functionname(n);
}