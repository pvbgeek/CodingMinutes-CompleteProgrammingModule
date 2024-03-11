#include <iostream>

using namespace std;


void printinc(int num)
{
    if(num == 0)
    {
        return;
    }

    printinc(num-1);
    cout<<num<<" ";
}

void printdec(int num)
{
    if(num == 0)
    {
        return;
    }

    cout<<num<<" ";
    printdec(num-1);
}

int main()
{
    cout<<"Enter a number : ";
    int num; cin>>num; cout<<endl;

    cout<<"Increasing : "<<endl;
    printinc(num);
    cout<<endl;
    cout<<"Decreasing : "<<endl;
    printdec(num);
    cout<<endl;
    return 0;
}
