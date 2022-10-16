#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n = 1110;
    int i = 0;
    int ans = 0;
    while(n!=0){
        int lastDigit = n%10;
        if(lastDigit == 1){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;

    }
        cout<<ans;
}