// n natural number sum
#include <bits/stdc++.h>
using namespace std;

int functionname(int n, int sum)
{
    if (n == 0)
    {
        return sum;
    }
    sum += n;
    functionname(n - 1, sum);
}

int main()
{
    int n = 5;
    int sum = 0;
    cout<<functionname(n,sum);

            
}