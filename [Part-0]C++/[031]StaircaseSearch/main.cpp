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

    cout<<"Enter the key element to search : ";
    int key; cin>>key; cout<<endl;

    int i=0; int j=c-1;
    int flag = 0;
    if(key<arr[0][0] || key>arr[r-1][c-1]){cout<<"Not Present !!"<<endl;}
    else
    {

        while(i<r && c>=0)
        {
            if(arr[i][j] == key){cout<<"Found the element at position : "<<i<<" "<<j<<endl; flag=1; break;}
            else if(key<arr[i][j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        if(flag==0)
        {
            cout<<"Not Present !!"<<endl;
        }

    }
    return 0;
}
