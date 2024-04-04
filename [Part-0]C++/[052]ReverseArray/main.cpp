#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cout<<"Enter the length of array : "<<endl;
    cin>>len;
    int arr[len];
    for(int i=0; i<len; i++)
    {
        cout<<"Enter a number : "<<endl;
        cin>>arr[i];
    }
    cout<<"Before Reverse : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    reverse(arr,arr+len);

    cout<<"After Reverse : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
