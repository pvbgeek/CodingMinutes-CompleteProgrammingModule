#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionsort(int *arr , int len)
{
    for(int i=1; i<len; i++)
    {
        int current = arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>current)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
}

int main()
{
    int arr[] = {8,4,5,6,3,9,2,1,7};
    cout<<"Before Sorting : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int len = end(arr) - begin(arr);
    insertionsort(arr , len);
    cout<<"After Sorting : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
