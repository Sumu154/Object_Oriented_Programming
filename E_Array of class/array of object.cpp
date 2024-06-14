#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int ID;
    string name;
    int age;

    Student()
    {

    }

    Student(int ID, string name, int age)
    {
        this->ID= ID;
        this->name= name;
        this->age= age;
    }

    void print_class()
    {
        cout << ID << " " << name << " " << age << "\n";
    }
};

int main()
{
    Student s[3];
    s[0] = Student(101, "sumaiya", 21);
    s[1] = Student(102, "Rohan", 21);
    s[2] = Student(103, "saleh", 21);
//    s[3] = Student(104, "chinu", 21);
//    s[4] = Student(105, "slona", 21);

    for(int i=0 ; i<3 ; i++){
        s[i].print_class();
    }

    return 0;
}
