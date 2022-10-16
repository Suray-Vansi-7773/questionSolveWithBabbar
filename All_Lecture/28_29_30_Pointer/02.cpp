// Pointer Expressions and Pointer Arithmetic 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int num = 5;
    int a= num;
    cout<<"a after "<<num<<endl;
    a++;
    cout<<"a after "<<num<<endl;

    int *p = &num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;
}