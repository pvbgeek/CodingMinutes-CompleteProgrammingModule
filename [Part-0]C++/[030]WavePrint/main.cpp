#include <iostream>
#include <bits/stdc++.h>
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

    for(int j=0; j<c; j++)
    {
        if(j%2 == 0)
        {
            for(int i=0; i<r; i++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=r-1; i>=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
