#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool chkprime(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num %i == 0){return false;}
    }
    return true;
}
int main()
{
    int llimit , ulimit;
    cout<<"Enter Lower Limit : ";
    cin>>llimit;
    cout<<"Enter Upper Limit : ";
    cin>>ulimit;

    for(int i=llimit; i<=ulimit; i++)
    {
        if(chkprime(i)){cout<<i<<" ";}
    }
    return 0;
}
