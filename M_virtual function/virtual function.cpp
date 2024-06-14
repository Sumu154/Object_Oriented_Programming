#include<bits/stdc++.h>
using namespace std;

class Person{
protected:
    int id;
    string name;
    int age;

public:
    Person(int id, string name, int age)
    {
        this->id = id;
        this->name = name;
        this->age = age;
    }

    virtual void display()
    {

    }
};

class Student: public Person{
private:
    double cgpa;

public:
    Student(int id, string name, int age, double cgpa): Person(id, name, age)
    {
        this->cgpa = cgpa;
    }

    void display()
    {
        cout << "Student information: \n  "
             << "id: " << id << "\n  "
             << "name: " << name << "\n  "
             << "age " << age << "\n  "
             << "cgpa: " << cgpa << "\n\n";
    }

};

class Faculty: public Person{
private:
    string desig;
public:
    Faculty(int id, string name, int age, string desig): Person(id, name, age)
    {
        this->desig = desig;
    }

    void display()
    {
        cout << "Faculty information: \n  "
             << "id: " << id << "\n  "
             << "name: " << name << "\n  "
             << "age " << age << "\n  "
             << "designation: " << desig << "\n\n";
    }
};

int main()
{
    Person *p[5];
    p[0] = new Student(101, "sumaiya", 21, 3.44);
    p[1] = new Faculty(210034, "rohan", 49, "lecturer");

    p[0]->display();
    p[1]->display();
}
