#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int n = 0;

    while(n != -1)
    {
        cout<<"Enter a number : ";
        cin>>n;
        if(n != -1)
        {
            sum = sum + n;
            cout<<endl;
        }

    }
    cout<<"Final Sum is : "<<sum<<endl;
    return 0;
}
