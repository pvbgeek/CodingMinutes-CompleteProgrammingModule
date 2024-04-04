#include <iostream>

using namespace std;


void numtoword(int num , string table[])
{
    if(num == 0){return;}

    numtoword(num/10 , table);

    int d = num%10;

    cout<<table[d]<<" ";


}

int main()
{
    int num = 58543;
    string table[] = {"Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"};
    numtoword(num , table);
    return 0;
}
