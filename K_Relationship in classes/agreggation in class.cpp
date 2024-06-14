#include<bits/stdc++.h>
using namespace std;  // Include the std namespace

class Student{
private:
    string name;

public:
    Student(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }
};

class Teacher{
private:
    string name;

public:
    Teacher(string name): name(name) {}

    string getName()
    {
        return name;
    }
};

class Classroom{
private:
    Teacher& t;  // Using a reference for aggregation
    vector<Student*> s;  // Using pointers for aggregation

public:
    Classroom(Teacher t, vector<Student*> s): t(t), s(s) {}

    void display()
    {
        cout << "Teacher: " << t.getName() << "\n";
        cout << "Students: ";
        for(auto i: s){
            cout << i->getName() << " ";
        }
        cout << "\n";
    }
};

int main() {
    Teacher t("Mr. Smith");
    vector<Student> s = {Student("Alice"), Student("Bob"), Student("Charlie")};

    // Using pointers to students for aggregation
    vector<Student*> sp;
    for(auto& i: s){
        sp.push_back(&i);
    }

    Classroom cl(t, sp);
    cl.display();

    return 0;
}
