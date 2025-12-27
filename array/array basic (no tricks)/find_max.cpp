//find max element
#include<iostream>
using namespace std;
int main(){
    int arr[]={12,23,234,34543,3456,98765,2345,12,76,23};
    int max=arr[0];
int n= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
   if( max<arr[i]) {
    max=arr[i];
   }
}
cout<<"Max: "<<max<<endl;
return 0;

}