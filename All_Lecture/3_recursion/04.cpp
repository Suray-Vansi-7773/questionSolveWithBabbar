// power of 2 using recrusion

#include <bits/stdc++.h>
using namespace std;

bool functionname(int my_step, int home)
{   
    if (my_step == home)
    {
        return 1 ;
    }
    return  2 * functionname(my_step + 1, home);
}

int main()
{
    int my_step = 0;
    int home = 10;

    if (functionname(my_step,home)){
        cout<<" reached home";
    }
}