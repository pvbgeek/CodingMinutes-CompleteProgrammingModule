#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printsubarr(int *arr , int len)
{
    for(int i=0; i<len; i++)
    {
        for(int j=i; j<len; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"Enter the length of array : ";
    int len;
    cin>>len;
    cout<<endl;
    int arr[len];

    for(int i=0; i<len; i++)
    {
        cout<<"Enter a number : ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"All sub-arrays are as follows : "<<endl;
    printsubarr(arr , len);
    return 0;
}
