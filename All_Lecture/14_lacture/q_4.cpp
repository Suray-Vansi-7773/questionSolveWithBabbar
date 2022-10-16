// squar root using simple logic 
#include <iostream>
using namespace std;
 

// int sqrt(int key){
//     int sum = -1;
//     for(int i = 0;i<key;i++){
//         if(i*i <= key){
//             sum = i;
//         }else if(i*i > key){
//             break;
//         }
//     } return sum;
// }
// int main(){
// int key = 25;
// cout<<sqrt(key);
    
// }





// squar root using binary search

int sqrt(int key){
    int start = 0;
    int end = key;
    int mid = (start + end)/2;
    int sum = -1;
    while(start<=end){
        if(mid*mid ==key){
            return mid;
        }
        else if(mid*mid >= key){
            end = mid-1;
            
        }else if(mid*mid<=key){
            sum = mid;
            start = mid+1;
        }
        mid = (start + end)/2;
        
    }return sum;

}
int main(){
    int key = 36;
    cout<<sqrt(key);
}