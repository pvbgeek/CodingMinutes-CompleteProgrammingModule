#include <iostream>

using namespace std;

void changeX(int x)
{
    x = x+2;
}

void changeY(int &y)
{
    y = y+1;
}
int main()
{
    int x = 10;
    cout<<"Example for X ....."<<endl;
    cout<<x<<endl;
    changeX(x);
    cout<<x<<endl;

    int y = 10;
    cout<<"Example for Y ....."<<endl;
    cout<<y<<endl;
    changeY(y);
    cout<<y<<endl;
    return 0;
}
