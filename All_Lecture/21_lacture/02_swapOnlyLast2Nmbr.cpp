#include <bits/stdc++.h>
using namespace std;

vector<int>revers(vector<int>v){
    int start =3;
    int end = v.size()-1;
    while(start<=end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;

}

void print(vector<int>v){
    for(int i = 0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }

}
 
int main(){
    vector<int>v = {1,2,3,4,5};
    vector<int>forprint = revers(v);
    print(forprint);
}