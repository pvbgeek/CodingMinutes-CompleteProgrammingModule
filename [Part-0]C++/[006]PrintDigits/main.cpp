#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number : ";
    int num;
    cin>>num;

    while(num != 0)
    {
        int d = num%10;
        cout<<d<<" ";

        num = num/10;
    }
    return 0;
}
