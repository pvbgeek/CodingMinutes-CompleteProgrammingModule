#include <iostream>

using namespace std;


int firstocc(int arr[] , int key , int i , int l)
{
    if(i == l)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }

    return firstocc(arr , key , i+1 , l);
}

int main()
{
    int arr[] = {2,3,4,1,4,5};
    cout<<firstocc(arr , 4 , 0 , 6)<<endl;
    cout<<firstocc(arr , 90 , 0 , 6)<<endl;
    return 0;
}
