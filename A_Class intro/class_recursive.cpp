#include<bits/stdc++.h>
using namespace std;

class person{
public:
    string name;
    person *father, *mother;  // recursively person class niye

    void print_info()
    {
        cout << name << "\n";
        cout << "Father name=" << father->name << "\n";
        cout << "MOther name=" << mother->name << "\n";
    }

};

int main()
{
    person p1;
    p1.father= new person;  //pointer point kothay korbe thik kore dea holo
    p1.mother= new person;

    p1.name= "sumaiya";
    p1.father->name= "shahin";
    p1.mother->name= "rikta";

    p1.print_info();
}
