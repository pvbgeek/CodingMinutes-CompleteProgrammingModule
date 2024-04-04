#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aaaabbcccdddddeee";
    string ans;
    int n = str.length();

    for(int i=0; i<str.size(); i++)
    {
        char curr = str[i];
        ans = ans+curr;
        int cnt = 1;
        while(i<n-1 && str[i+1] == str[i])
        {
            cnt++;
            i++;
        }
        ans = ans + to_string(cnt);
    }

    cout<<"Compressed String is : "<<ans<<endl;


    return 0;
}
