
// factorial using recursion
#include <bits/stdc++.h>
using namespace std;
 
int functionname(int n){
if(n==0){
    return 1;
}
return n*functionname(n-1);
}
 
 
int main(){
int n = 5;
    
cout<<functionname(n);
}