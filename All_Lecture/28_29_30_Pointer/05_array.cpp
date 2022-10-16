#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[10]= {12,23,34,45,54};
    // cout<<arr<<endl;
    // cout<<&arr<<endl; 

    // cout<<arr[0]<<endl;
    // cout<<&arr[0]<<endl;


    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<(*arr)+1<<endl;
    // cout<<*(arr+1)<<endl;

    // int i = 3;
    // cout<<i[arr]<<endl;



    int temp[10] ={1,2}; 
    // cout<<sizeof(temp)<<endl; //4*10;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;

    int *p = &temp[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    cout<<p+1<<endl;
    cout<<*p+1<<endl;
    cout<<p+2<<endl;







}