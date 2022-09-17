#include <iostream>
using namespace std;

bool isEven(int number){
   
if(number % 2 ==0){
    return 0;

}
return 1;
}

int main(){
    int num;
    cin>>num;

    if(isEven(num)){
        cout<<"this is even";
    }
    else{
        cout<<"this is odd";
    }
}
