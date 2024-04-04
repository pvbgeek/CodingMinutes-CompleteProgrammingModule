#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void merger(vector<int> &arr , int s , int e)
{
    vector<int> temp;
    int mid = s + (e-s)/2;
    int i = s;
    int j = mid+1;

    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=e)
    {
        temp.push_back(arr[j]);
        j++;
    }

    int k=0;

    for(int idx=s; idx<=e; idx++)
    {
        arr[idx] = temp[k];
        k++;
    }


    return;

}

void mergesort(vector<int> &arr , int s , int e)
{
    if(s>=e){return;}
    int mid = s + (e-s)/2;

    mergesort(arr , s , mid);
    mergesort(arr , mid+1 , e);
    merger(arr , s , e);
}

int main()
{
    vector<int> arr = {8,6,4,7,9,3,1,5,2};

    cout<<"Before Sorting"<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    int s = 0;
    int e = arr.size()-1;

    mergesort(arr , s , e);

    cout<<"After Sorting"<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
