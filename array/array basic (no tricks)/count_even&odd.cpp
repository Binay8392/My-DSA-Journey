//count how many even and odd numbers exist 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,32,23,12,11,54,7,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]% 2==0)  even=even+1;
        else odd=odd+1;
    }
    cout<<"even:"<<even<<"            "<<"odd:"<<odd;
}