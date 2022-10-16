#include <bits/stdc++.h>
using namespace std;
 
int main(){
    // Take Input
    char ch[10];
    cout<<"Type Your Name Here :-";
    cin>>ch;

    // for count how many time loop running 
    int count=0;

    // '\0' this is consider space if ch[i] is not equal to space, run this loop
    for(int i = 0; ch[i] != '\0'; i++){
        count++;
    }
    cout<<count;
    
}