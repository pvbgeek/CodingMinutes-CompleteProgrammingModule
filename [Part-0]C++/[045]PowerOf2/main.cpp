#include <iostream>

using namespace std;


bool powerof2(int n)
{
    if(n & (n-1)){return false;}
    else{return true;}
}

int main()
{
    cout<<"Enter a number : ";
    int num; cin>>num; cout<<endl;

    if(powerof2(num)){cout<<"True"<<endl;}
    else{cout<<"False"<<endl;}

    return 0;
}
