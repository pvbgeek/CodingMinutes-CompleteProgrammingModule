#include <iostream>

using namespace std;

bool chksort(int arr[] , int i , int l)
{
    if(i == l)
    {
        return true;
    }

    if(arr[i] < arr[i-1])
    {
        return false;
    }

    return chksort(arr , i+1 , l);
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,4,5,3};

    cout<<chksort(arr1,1,5)<<endl;
    cout<<chksort(arr2,1,5)<<endl;

    return 0;
}
