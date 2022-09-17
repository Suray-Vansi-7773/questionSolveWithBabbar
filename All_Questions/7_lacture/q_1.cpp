// print reverse number
#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n = 123;
    int i = 0;
    int sum = 0;
    while(n!=0){
        int last = n%10;
        sum = sum*10 + last;
        n=n/10;
        i++;
    }
    cout<<sum;
}