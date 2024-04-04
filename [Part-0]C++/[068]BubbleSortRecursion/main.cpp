#include <iostream>

using namespace std;

void chk(int arr[] , int j, int jend)
{
    if(j == jend){return;}

    if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}

    chk(arr , j+1 , jend);
}

void bubsort(int arr[])
{
    int i=0;
    int l=5;

    for(int i=0; i<l; i++)
    {
        chk(arr,0,l-i-1);
    }

    return;
}

int main()
{
    int arr[] = {1,4,2,5,3};

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    bubsort(arr);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
