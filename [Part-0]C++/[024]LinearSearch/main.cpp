#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int linear_srch(int *arr , int len , int key)
{
    for(int i=0; i<len; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,3,6,4,5,2,8,7,9,1};
    cout<<"Enter the key element to search : ";
    int key;
    cin>>key;
    cout<<endl;
    int len = end(arr) - begin(arr);
    int index = linear_srch(arr , len , key);
    if(index == -1)
    {
        cout<<"Element Not Found !!"<<endl;
    }
    else
    {
        cout<<"Element found at index : "<<index<<endl;
    }

    return 0;
}
