#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int id;
    static int count;

public:
    void setdata()
    {
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "id: " << id << "\n";
        cout << "count: " << count << "\n";
    }

    //static member function
    static void getcount()
    {
        //cout << "ID is: " << ID << "\n"; //error->static functione shudhu static variable
        cout << "count is: " << count << "\n";               //access kora jabe
    }
};


int Student:: count;
/*
default 0..
int Student:: count = 100;
*/
int main()
{
    Student sumaiya, rohan, saleh;

    sumaiya.setdata();
    sumaiya.getdata();
    Student::getcount();

    rohan.setdata();
    rohan.getdata();
    Student::getcount();

    saleh.setdata();
    saleh.getdata();
    Student::getcount();



}
