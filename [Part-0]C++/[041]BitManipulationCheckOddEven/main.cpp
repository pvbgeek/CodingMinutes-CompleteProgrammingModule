#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number : ";
    int x; cin>>x;cout<<endl;

    if(x&1){cout<<"Odd Number"<<endl;}
    else{cout<<"Even Number"<<endl;}
    return 0;
}
