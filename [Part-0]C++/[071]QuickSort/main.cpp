#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr , int s , int e)
{
    int i=s-1;
    int pivot = arr[e];

    for(int j=s; j<e; j++)
    {
        if(arr[j]>pivot)
        {
            j++;
        }
        else
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i] , arr[e]);

    return i;
}

void quicksort(vector<int> &arr , int s , int e)
{
    if(s>=e){return;}
    int pidx = partition(arr , s , e);
    quicksort(arr , s, pidx-1);
    quicksort(arr , pidx+1 , e);
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

    quicksort(arr , s , e);

    cout<<"After Sorting"<<endl;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
