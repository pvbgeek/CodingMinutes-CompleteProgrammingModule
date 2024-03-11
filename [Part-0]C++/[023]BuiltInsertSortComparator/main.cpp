#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,4,1,2,5,8,7};
    cout<<"Before-Sorting :"<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    int len = end(arr) - begin(arr);

    sort(arr,arr+len,greater<int>());
    cout<<"Sort by Descending Order : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    sort(arr , arr+len);
    cout<<"Sort by Ascending Order : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
