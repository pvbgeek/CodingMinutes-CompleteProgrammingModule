#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int rev = 0;
    while(num != 0)
    {
        int d = num%10;
        rev = rev*10 + d;
        num = num/10;
    }
    cout<<"Reversed Number is : "<<rev<<endl;
    return 0;
}
