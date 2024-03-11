#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionsort(int *arr , int len)
{
    for(int i=0; i<len-1; i++)
    {
        int m=i;
        for(int j=i+1; j<len; j++)
        {
            if(arr[j]<arr[m])
            {
                m = j;
            }
        }

        if(m != i){swap(arr[m] , arr[i]);}
    }
}

int main()
{
    int arr[] = {6,8,4,7,5,1,3,2};
    cout<<"Before Sorting : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int len = end(arr) - begin(arr);
    selectionsort(arr , len);
    cout<<"After Sorting : "<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
