#include<bits/stdc++.h>

using namespace std;

class user{
//private dile inherited class theke access kora jabe na..
protected:
    string name;
    int age;
};

//user classer ekta inherited class
//admin user je extra functionality thakbe
//eta user class ke extend kore
class admin: user{
//eta private karon ei classei access korbo
private:
    string designation;

//main function theke access korbo tai public dibo
public:

    void set_class(string name, int age, string designation)
    {
        this->name= name;
        this->age= age;
        this->designation= designation;
    }

    void print_class()
    {
        cout << name << " " << age << " " << designation << "\n";
    }

};
int main()
{
    admin ad1;

    //egula public ei ace
    ad1.set_class("sumaiya", 21, "Vc");
    ad1.print_class();
}
