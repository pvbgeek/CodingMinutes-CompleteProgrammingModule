#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "My name is Parth Bhalerao";
    cout<<str<<endl;

    cout<<str[4]<<endl;
    cout<<str.at(6)<<endl;

    /*string temp;
    cout<<"Enter a String  : ";
    cin>>temp;

    cout<<"String input is : "<<temp<<endl; //takes input only till before the first white space ..*/

    string mystr;
    cout<<"Enter a string : ";
    getline(cin , mystr);
    cout<<"String input is : "<<mystr<<endl;

    string s1 = "Parth";
    string s2 = "Parth";

    if(s1 == s2){cout<<"True !!"<<endl;}
    else{cout<<"False"<<endl;}

    for(int i=0; i<mystr.length(); i++)
    {
        cout<<mystr[i]<<" ";
    }
    cout<<endl;

    for(char x : mystr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<mystr.substr(2,7)<<endl;
    cout<<mystr.find("Soham")<<endl;
    cout<<mystr.append("Computer Science")<<endl;
    cout<<mystr<<endl;
    cout<<mystr.find("hale")<<endl;

    int index = mystr.find("Soham");

    if(index == -1)
    {
        cout<<"Not Found !!"<<endl;
    }
    else
    {
        cout<<"Found at index : "<<index<<endl;
    }

    return 0;
}
