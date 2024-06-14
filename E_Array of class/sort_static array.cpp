#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int age;
    int stu_ID;

    student(string name, int age, int stu_ID)
    {
        this->name= name;
        this->age= age;
        this->stu_ID= stu_ID;
    }

    void print_class()
    {
        cout << name << " " << age << " " << stu_ID << "\n";
    }


};

bool comp(student a, student b)
{
    //when a is less than b....oi condition ta ekhane likhte hbe
    return a.stu_ID < b.stu_ID;
}

int main()
{
    vector<student> a;  //ekta array nibo amdr create kora student data typer
    for(int i=0 ; i<5 ; i++){
        a.push_back(student("A", 20, 10-i));
    }

    for(int i=0 ; i<5 ; i++){
        a[i].print_class();
    }

    cout << "After sorting\n";

    sort(a.begin(), a.end(), comp);

    for(int i=0 ; i<5 ; i++){
        a[i].print_class();
    }


}

