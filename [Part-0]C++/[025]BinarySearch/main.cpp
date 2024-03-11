#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binsrch(int *arr , int len , int key)
{
    int s = 0;
    int e = len-1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = end(arr) - begin(arr);
    int key = 8;
    int index = binsrch(arr , len , key);

    if(index == -1)
    {
        cout<<"Not Found !!"<<endl;
    }
    else
    {
        cout<<"Found at index : "<<index<<endl;
    }

    return 0;
}
