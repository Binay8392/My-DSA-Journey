//print all elements of an array
#include <iostream>
using namespace std;
int main(){
    
    int arr[10];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}