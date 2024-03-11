#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printarr(int *arr , int len)
{
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int len = end(arr) - begin(arr);
    printarr(arr , len);
    return 0;
}
