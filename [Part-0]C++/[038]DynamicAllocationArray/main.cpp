#include <iostream>

using namespace std;

int main()
{
    int *arr = new int[5];

    for(int i=0; i<5; i++)
    {
        cout<<"Enter a number : ";
        cin>>arr[i];
    }
    cout<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete []arr;
    cout<<"Delete Success !!"<<endl;

    return 0;
}
