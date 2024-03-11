#include <iostream>

using namespace std;

long factorial(int num)
{
    if(num == 0){return 1;}

    else return num*factorial(num-1);
}

int main()
{
    cout<<"Enter a number : ";
    int num; cin>>num; cout<<endl;

    cout<<factorial(num)<<endl;
    return 0;
}
