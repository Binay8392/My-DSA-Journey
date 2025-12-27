//find the smallest number
#include<iostream>
using namespace std;
int main(){
    int arr[]={12,43,65,2,654,23};
    int n= sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])   {
            min=arr[i];
    }
   
} 
 cout<<"min:"<<min;
}