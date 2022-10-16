#include <iostream>
using namespace std;

int count(int count){
    for(int i=1; i<=count; i++){
        cout<<i<<endl;

    }
}
 
int main(){
    int a;
    cin>>a;
    int print = count(a);
}