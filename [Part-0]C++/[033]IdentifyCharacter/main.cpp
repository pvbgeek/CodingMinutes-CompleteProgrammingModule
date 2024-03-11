#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    if(ch == ' ' || ch == '\n')
    {
        cout<<"White-Space"<<endl;
    }
    else if(ch >= 'A' && ch<= 'Z')
    {
        cout<<"Upper-Case Letter"<<endl;
    }
    else if(ch >= 'a' && ch<= 'z')
    {
        cout<<"Lower-Case Letter"<<endl;
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"Numeric Digit"<<endl;
    }
    else
    {
        cout<<"Special Character"<<endl;
    }
    return 0;
}
