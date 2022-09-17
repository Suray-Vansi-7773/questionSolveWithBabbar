#include <iostream>
#include <math.h>
using namespace std;

 
int main(){
    int n = 10;
    int ans = 0;
    int i = 0;
 
    while(n !=0){
         int digit = n & 1;
         cout<<"lastdigit"<<digit<<endl;
         ans = (digit * pow(10,i) )+ans;
         cout<<"this is answer"<<ans<<endl;
         n = n>>1;
         i++;
       

    }
    cout<<ans;

}