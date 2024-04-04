#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int maxsum = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
                sum = sum + arr[k];
            }
            cout<<": Sum is : "<<sum<<endl;
            if(sum>maxsum){maxsum = sum;}
        }
        cout<<endl;

    }
    cout<<"Maximum sum is : "<<maxsum<<endl;
    return 0;
}
