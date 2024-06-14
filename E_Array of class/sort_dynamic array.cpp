#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int age;
    int stu_ID;

    student(string name, int age, int stu_ID){
        this->name = name;
        this->age = age;
        this->stu_ID = stu_ID;
    }

    void print_class()
    {
        cout << name << " " << age << " " << stu_ID << "\n";
    }
};

bool comp(const student* a, const student* b)
{
    return a->stu_ID < b->stu_ID;
}

int main() {
    vector<student*> a;  // Using pointers to objects

    // Dynamic memory allocation for student objects
    for(int i=0; i<5; i++){
        a.push_back(new student("A", 20, 10-i));
    }

    for(int i=0; i<5; i++){
        a[i]->print_class();
    }

    cout << "After sorting\n";

    sort(a.begin(), a.end(), comp);

    for(int i=0; i<5; i++){
        a[i]->print_class();
    }

//    // Release dynamically allocated memory
//    for(int i=0; i<5; i++) {
//        delete a[i];
//    }

    return 0;
}

