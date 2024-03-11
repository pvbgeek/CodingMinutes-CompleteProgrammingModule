#include <iostream>

using namespace std;


class Student
{
    string name;
    int rno;

public :
    Student()
    {
        cout<<"This is Object of Student Class !!"<<endl; //Constructor
    }
    void set_details(string nm , int r)
    {
        name = nm;
        rno = r;
    }

    void get_details()
    {
        cout<<"Name of student is : "<<name<<endl;
        cout<<"Roll number of student is : "<<rno<<endl;
    }
};
int main()
{
    Student s1;
    s1.set_details("Parth" , 65);
    s1.get_details();

    Student s2;
    s2.set_details("Soham" , 33);
    s2.get_details();

    return 0;
}
