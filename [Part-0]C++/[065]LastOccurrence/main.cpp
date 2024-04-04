#include <iostream>

using namespace std;

int lastocc(int arr[] , int key , int i)
{
    if(i == -1)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }

    return lastocc(arr , key , i-1);
}

int main()
{
    int arr[] = {2,3,4,5,3,8,7,6};
    cout<<lastocc(arr , 3 , 8)<<endl;
    cout<<lastocc(arr , 55, 8)<<endl;

    return 0;
}
