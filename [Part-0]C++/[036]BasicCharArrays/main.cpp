#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name[]{"Parth"};
    cout<<name<<endl;
    cout<<strlen(name)<<endl;

    char company[] = "Microsoft";
    cout<<company<<endl;
    cout<<strlen(company)<<endl;


    char mystr[] = {'a','b','c','d','\0'};
    cout<<mystr<<endl;
    cout<<strlen(mystr)<<endl;

    char str[] = {'a' , 'b' , 'c' , 'd'}; //give incorrect output because in this case we need explicitly mention the '\0' end character
    cout<<str<<endl;
    cout<<strlen(str)<<endl;

    return 0;
}
