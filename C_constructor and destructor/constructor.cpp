#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int age;
    int stu_ID;
    string father;
    string mother;

    // 1) default -> no arguments
    Student()
    {

    }

    // 2) parameterized -> having arguments

    //construction function value set kore dey
    //5 ta infor jonno ekhane ashbe
    student(string name,int age, int stu_ID, string father, string mother)
    {
        this->name= name;
        this->age= age;
        this->stu_ID= stu_ID;
        this->father= father;
        this->mother= mother;
    }

    //3 ta infor jonno ekhane ashbe
    student(string name, int age, int stu_ID)
    {
        this->name= name;
        this->age= age;
        this->stu_ID= stu_ID;
    }

    void print_class()
    {
        cout << name << " " << age << " " << stu_ID << " " << father << " " << mother << "\n";
    }

};

int main()
{
    //construction functioner jonno code choto hoye jay..ekebarei shb allocate kora jay
    //5 ta info..1st functione jabe
    student s1("sumaiya",21,210041154,"shahin","rikta");
    s1.print_class();

    //3 ta info..2nd functione jabe
    student s2("rohan",21,210041151);
    s2.print_class();

}
