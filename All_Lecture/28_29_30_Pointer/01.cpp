#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int var = 10;
    int *ptr = &var;

    cout<<"value of var "<<*ptr<<endl; // for value 
    cout<<"value of var "<<ptr<<endl; // for address

    *ptr = 20;
    cout<<"value of var "<<*ptr<<endl; // for address
    cout<<"value of var "<<*ptr+1<<endl; // for address
    cout<<"value of var "<<*ptr<<endl; // for address
}