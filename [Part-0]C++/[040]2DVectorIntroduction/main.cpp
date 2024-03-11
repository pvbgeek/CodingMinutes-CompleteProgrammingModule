#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat;
    cout<<"Enter number of rows : ";
    int r; cin>>r; cout<<endl;
    cout<<"Enter number of cols : ";
    int c; cin>>c; cout<<endl;

    for(int i=0; i<r; i++)
    {
        vector<int> temp;
        for(int j=0; j<c; j++)
        {
            cout<<"Enter a number : ";
            int x; cin>>x;
            temp.push_back(x);
        }
        cout<<endl;
        mat.push_back(temp);
    }


    cout<<"Matrix is : "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
