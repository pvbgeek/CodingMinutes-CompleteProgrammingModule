#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> myvec;

    for(int i=9; i>0; i--)
    {
        myvec.push_back(i);
    }

    for(int x : myvec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    sort(myvec.begin(),myvec.end());

    for(int x : myvec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
