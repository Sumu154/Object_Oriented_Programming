#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    static int id;
    string name;
    int sub[6];

public:
    Student()
    {

    }

    Student(int sub[], string name)
    {
        id++;
        this->name = name;
        for(int i=0 ; i<6 ; i++){
            this->sub[i] = sub[i];
        }
    }

    int totalMarks()
    {
        int sum = 0;
        for(int i=0 ; i<6 ; i++){
            sum += sub[i];
        }
        return sum;
    }

    void display()
    {
        cout << "id: " << id << "\n";
        cout << "name: " << name << "\n";
        cout << "all marks: ";
        for(int i=0 ; i<6 ; i++){
            cout << sub[i] << " ";
        }
        cout << "\n";
    }
};

int Student:: id = 0;

int main()
{
    int a[6] = {80, 34, 67, 89, 90, 98};
    Student s1(a, "sumaiya");;
    s1.display();
}
