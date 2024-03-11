#include <iostream>

using namespace std;

long fastexpo(int b , int i)
{
    long ans = 1;
    while(i>0)
    {
        if(i&1)
        {
            ans = ans*b;
        }
        b = b*b;
        i = i>>1;
    }

    return ans;
}

int main()
{
    cout<<"Enter base value : ";
    int b; cin>>b; cout<<endl;

    cout<<"Enter index value : ";
    int i; cin>>i; cout<<endl;

    cout<<fastexpo(b,i)<<endl;

    return 0;
}
