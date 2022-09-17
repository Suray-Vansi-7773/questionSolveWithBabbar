#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int que = 8;
    int count = 0;
    for(int i = 0; i<30; i++){
        int power = pow(2,i);
        if(que == power){
           count++;
        }
    }
    if(count ==1){
        cout<<"yes this is in 2's power";
    }else{
        cout<<"no this is not in 2's power";
    }
}