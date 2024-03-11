#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool chksort(int *arr , int len , int i)
{
    if(i == len){return true;}
    else if(arr[i]<arr[i-1]){return false;}

    return chksort(arr , len , i+1);
}

int main()
{
    int arr[] = {1,2,3,5,4};

    int len = end(arr)-begin(arr);

    if(chksort(arr,len,1)){cout<<"Sorted !!"<<endl;}
    else{cout<<"Not Sorted !!"<<endl;}

    return 0;
}
