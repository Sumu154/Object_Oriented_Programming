#include<bits/stdc++.h>

using namespace std;

class person{
public:
    string name;
    person *father, *mother;

    //
    person()
    {
    }

    //constructor function
    person(string name, string f_name, string m_name)
    {
        this->name= name;
        father= new person;  // new memory allocation..free korte hbe nij dayitte
        this->father->name= f_name;
        mother= new person;  //same
        this->mother->name= m_name;
    }

    void print_class()
    {
        cout << name << " " << father->name << " " << mother->name << "\n";
    }

    ~person()
    {
        cout << "called\n";
        if(father != NULL)
            delete father;
        if(mother != NULL)
            delete mother;
    }

};

int main()
{
    person p1("sumaiya", "shahin", "rikta");
    p1.print_class();

}


