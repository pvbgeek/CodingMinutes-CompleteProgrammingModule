#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {4,2,-9,5,3};
    int maxsum = 0;
    int prefix[5];
    prefix[0] = arr[0];
    for(int i=1; i<5; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    for(int i=0; i<5; i++)
    {
        int sum = 0;
        for(int j=i+1; j<5; j++)
        {
            if(i==0)
            {sum = prefix[i];}
            else
            {sum = prefix[j]-prefix[i-1];}
        }
        cout<<"Sum is : "<<sum<<endl;
        if(sum>maxsum){maxsum = sum;}
    }

    cout<<"Max-Sum is : "<<maxsum;
    return 0;
}
