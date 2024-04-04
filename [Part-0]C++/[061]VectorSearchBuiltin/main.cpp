#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> myvec;
    for(int i=1; i<10; i++)
    {
        myvec.push_back(i);
    }
    for(int x : myvec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    it = find(myvec.begin(), myvec.end(), 6);
    if(it != myvec.end())
    {
        cout<<"Element 6"<<" found at position : "<<it-myvec.begin()<<endl;
    }
    else
    {
        cout<<"Not Found !!"<<endl;
    }

    it = find(myvec.begin(), myvec.end(), 50);
    if(it != myvec.end())
    {
        cout<<"Element found at position : "<<it-myvec.begin()<<endl;
    }
    else
    {
        cout<<"Not Found !!"<<endl;
    }
    return 0;
}
