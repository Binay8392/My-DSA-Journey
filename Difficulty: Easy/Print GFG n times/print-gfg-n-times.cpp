#include <iostream>
using namespace std;
string s(int n)
{
    if(n !=0) 
    {
    cout<<"GFG"<<" ";
    return s(n-1);
    }
    
}

int main() {
    int n;
    cin >> n;

    // code here
    cout<<s(n)<<" ";

    return 0;
}
