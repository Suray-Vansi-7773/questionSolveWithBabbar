//important concept
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int i = 3;
    int *t = &i;
    cout<<"*t "<<*t<<endl;  

    
    *t = *t+1;
    *t++;
    cout<<"*t++ "<<*t<<endl;

    t = t+1;
    cout<<"t "<<t<<endl;
}