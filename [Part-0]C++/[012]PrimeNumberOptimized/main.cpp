#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    int flag = 0;
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Yes !! a Prime Number !!"<<endl;
    }
    else
    {
        cout<<"No !! Not a Prime Number !!"<<endl;
    }
    return 0;
}
