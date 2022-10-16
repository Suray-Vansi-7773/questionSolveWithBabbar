#include <iostream>
using namespace std;

float squreroot(int number)
{
    int start = 0;
    int end = number;
    int mid;
    float ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == number)
        {
            ans = mid;
            // break;
        }
        if (mid * mid < number)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{   int input;
    cin>>input;
    cout << squreroot(input);
}
