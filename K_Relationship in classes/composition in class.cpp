#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;

public:
    Student(string name)
    {
        this->name = name;
    }
    string getName() const
    {
        return name;
    }
};

class Teacher {
private:
    string name;

public:
    Teacher(string name)
    {
        this->name = name;
    }
    string getName() const
    {
        return name;
    }
};

class Classroom {
private:
    Teacher t;
    vector<Student> s;

public:
    Classroom(Teacher t, vector<Student> s) : t(t), s(s)
    {

    }
    void display() const
    {
        cout << "Teacher: " << t.getName() << "\n";
        cout << "Students: ";
        for(auto i: s){
            cout << i.getName() << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Teacher t("Mr. Smith");
    vector<Student> s = {Student("Alice"), Student("Bob"), Student("Charlie")};

    Classroom cl(t, s);   // Creating an instance of Classroom to associate Teacher and Students
    cl.display();        // Displaying the information about the Classroom
}


