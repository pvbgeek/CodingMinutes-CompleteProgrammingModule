#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    cout<<"Enter the length of array : ";
    int len; cin>>len;

    for(int i=0; i<len; i++)
    {
        arr.push_back(i+1);
    }

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(8);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    arr.push_back(9);
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    return 0;
}
