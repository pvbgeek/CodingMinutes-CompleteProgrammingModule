#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter two numbers as input : "<<endl;
    int a , b;
    cin>>a>>b;
    int limit = min(a,b);
    int gcd = 1;
    for(int i=2; i<=limit; i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            gcd = i;
        }
    }
    cout<<"GCD is : "<<gcd<<endl;

    return 0;
}
