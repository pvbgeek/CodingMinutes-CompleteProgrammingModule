#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *xptr = &x;

    cout<<x<<endl;
    cout<<xptr<<endl;
    cout<<&xptr<<endl;

    int **ptr = &xptr;

    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    return 0;
}
