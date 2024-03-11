#include <iostream>

using namespace std;


int getithbit(int num , int n)
{
    int mask = 1<<n;

    if(num&mask){return 1;}
    else{return 0;}
}
int main()
{
    cout<<"Enter a number : ";
    int num; cin>>num; cout<<endl;

    cout<<"Enter the value of n : ";
    int n; cin>>n; cout<<endl;

    cout<<getithbit(num , n)<<endl;
    return 0;
}
