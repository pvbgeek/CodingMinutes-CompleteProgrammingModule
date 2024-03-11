#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter number of rows : ";
    int r; cin>>r;
    cout<<endl;
    cout<<"Enter number of columns : ";
    int c; cin>>c;
    cout<<endl;

    int arr[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter a number : ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Given Matrix is : "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
