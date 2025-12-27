//calculate total sum of an array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=arr[0];
    for(int i=1;i<n;i++){
        
        sum=sum+arr[i];
    }
    cout<<"sum:"<<sum;
}