#include <iostream>

using namespace std;

int main()
{
    cout<<"Capital Letters ASCII Values are as follows : "<<endl;
    for(int i=65; i<91; i++)
    {
        cout<<i<<"-"<<(char)i<<endl;
    }
    cout<<"Small Letters ASCII Values are as follows : "<<endl;
    for(int i=97; i<123; i++)
    {
        cout<<i<<"-"<<(char)i<<endl;
    }
    return 0;
}
