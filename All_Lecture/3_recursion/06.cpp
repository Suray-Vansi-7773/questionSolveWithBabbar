// 412 type in english
#include <bits/stdc++.h>
using namespace std;
 
void functionname( string s[], int k){
    if(k == 0 )
        return ;
    int remender = k % 10;
    k = k/10;
    functionname(s,k);
    cout<<s[remender]<<" ";

}
 
 
int main(){
string s[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
int k = 412;
functionname(s,k);


    
}