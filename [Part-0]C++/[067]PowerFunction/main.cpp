#include <iostream>

using namespace std;


long pow(int b , int i)
{
    if(i == 0)
    {
        return 1;
    }
    return b * pow(b , i-1);
}

int main()
{
    cout<<pow(2,5)<<endl;
    cout<<pow(3,4)<<endl;
    cout<<pow(8,0)<<endl;
    return 0;
}
