#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void bubblesort(int *arr , int len)
{
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {2,3,4,1,6,5,7,8,9};
    cout<<"Before Sorting : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int len = end(arr) - begin(arr);
    bubblesort(arr,len);
    cout<<"After Sorting : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
