#include <iostream>
using namespace std;
 
int main(){
    int key =6;
    int count = 0;
    int ans = 1;
    for(int i =0; i<=30;i++){
        if(ans == key){
            count++;
        }
        if(ans<INT16_MAX/10){
        ans = ans *2;
        }
    }
    if(count ==1){
        cout<<"yes this is in the 2's power";
    }else{
        cout<<"no this is not in the 2's power";
    }
}