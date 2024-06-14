#include<bits/stdc++.h>

using namespace std;

class student{
private:
    string name;
    int age;
    int stu_ID;
//print korar jonno ar info set hoar jonno public korte hbe
public:

    void set_class(string name,int age,int stu_ID)
    {
        this->name= name;   //ekhane access korte parci karon classer vitore accessable
        this->age= age;
        this->stu_ID= stu_ID;
    }

    void print_class()
    {
        cout << name << " " << age << " " << stu_ID << "\n";
    }

};

int main()
{
    student s1;

    //evabe info set kora jay na baire theke..private thakle
   /* s1.name= "sumaiya";
    s1.age= 21;
    s1.stu_ID= 210041154;*/


    s1.set_class("sumiaya",21,210041154);
    s1.print_class();
}
