#include <iostream>

using namespace std;

int clearithbit(int &num , int n)
{
    int mask = ~(1<<n);

    num = num&mask;

    return num;
}

int main()
{
    cout<<"Enter a number : ";
    int num; cin>>num; cout<<endl;

    cout<<"Enter value of n : ";
    int n; cin>>n; cout<<endl;

    cout<<clearithbit(num , n)<<endl;
    return 0;
}
