#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int id;

public:
    // 1) const member function can be called in class defination
    /*
    void setdata()
    {
        cin >> id;
    }
    void getdata() const
    {
        cout << "id: " << id << "\n";
        //id++;  //which is not allowd

    }
    */

    // 2) const member function can be called outside the class defination
    void setdata();

    void getdata() const;

};

void Student:: setdata()
{
    cin >> id;
}

void Student:: getdata() const
{
    cout << "id: " << id << "\n";
}

int main()
{
    Student sumaiya, rohan, saleh;

    sumaiya.setdata();
    sumaiya.getdata();

    rohan.setdata();
    rohan.getdata();

    saleh.setdata();
    saleh.getdata();

}

