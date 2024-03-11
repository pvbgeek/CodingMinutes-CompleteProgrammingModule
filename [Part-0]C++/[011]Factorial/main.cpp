#include <iostream>

using namespace std;

long findfact(int &num , long &ans)
{
    if(num == 0 || num ==1){return ans;}

    while(num != 0)
    {
        ans = ans*num;
        num--;
    }
    return ans;
}
int main()
{
    cout<<"Enter a number : ";
    int num;
    cin>>num;

    long ans = 1;
    cout<<findfact(num,ans)<<endl;

    return 0;
}
