#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5,2,1,4,3};
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    int len = end(arr) - begin(arr);

    sort(arr , arr+len);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
