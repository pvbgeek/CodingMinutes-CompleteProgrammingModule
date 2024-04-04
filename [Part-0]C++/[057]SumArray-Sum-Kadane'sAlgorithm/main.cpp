#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {4,2,-8,7,1};
    int maxsum = 0;
    int currsum = 0;
    for(int x : arr)
    {
        currsum = currsum + x;
        if(currsum>maxsum)
        {
            maxsum = currsum;
        }
        if(currsum<0)
        {
            currsum = 0;
        }
    }

    cout<<"Max-Sum is : "<<maxsum<<endl;
    return 0;
}
