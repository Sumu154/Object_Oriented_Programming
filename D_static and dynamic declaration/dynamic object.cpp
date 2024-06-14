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

int main()
{
    //pointer diye memory allocate kore info insert--->dynamic object
    student *s1= new student("sumaiya", 21, 210041154);
    s1->print_class();
}
