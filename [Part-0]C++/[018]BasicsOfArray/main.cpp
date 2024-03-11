#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<a[3]<<endl;

    int b[6];
    cout<<b<<endl;
    cout<<b[1]<<endl; //garbage value and not zero
    cout<<b[2]<<endl; //garbage value and not zero


    int len = end(b)-begin(b);
    for(int i=0; i<len; i++)
    {
        cout<<"Enter a number : "<<endl;
        cin>>b[i];
    }
    cout<<"Array is : "<<endl;
    for(int i=0; i<len; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<"For-each loop :"<<endl;
    for(int x : b)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
