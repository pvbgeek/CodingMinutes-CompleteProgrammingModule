#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the String : ";
    cin>>str;
    cout<<endl;

    int x=0; int y=0;
    int len = str.length();
    for(int i=0; i<len; i++)
    {
        if(str[i] == 'N'){y++;}
        else if(str[i] == 'S'){y--;}
        else if(str[i] == 'E'){x++;}
        else{x--;}
    }
    string ans = "";
    if(x<0)
    {
        while(x!=0)
        {
            ans = ans + 'W';
            x++;
        }
    }
    else
    {
        while(x!=0)
        {
            ans = ans + 'E';
            x--;
        }
    }

    if(y<0)
    {
        while(y != 0)
        {
            ans = ans + 'S';
            y++;
        }
    }
    else
    {
        while(y != 0)
        {
            ans = ans + 'N';
            y--;
        }
    }

    cout<<ans<<endl;
    return 0;
}
