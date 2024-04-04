#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[][3] = {{1,2,3},{4,5,6}, {7,8,9},{10,11,12}};

    int r = 0;
    int c = 2;
    int key = 1;
    int flag = 0;
    while(r<4 && c>=0)
    {
        if(key == mat[r][c]){cout<<"Found at position : ("<<r<<","<<c<<")"<<endl; flag = 1;break;}
        else if(key>mat[r][c]){r++;}
        else{c--;}
    }
    if(flag == 0)
    {
        cout<<"Not Found !!"<<endl;
    }

    return 0;
}
