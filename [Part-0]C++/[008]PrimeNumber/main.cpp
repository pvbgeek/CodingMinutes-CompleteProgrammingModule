#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int cnt=0;

    for(int i=1; i<=num; i++)
    {
        if(num%i == 0){cnt++;}
    }
    if(cnt == 2){cout<<"Yes Number is Prime !!";}
    else{cout<<"Not a Prime Number !!"<<endl;}
    return 0;
}
