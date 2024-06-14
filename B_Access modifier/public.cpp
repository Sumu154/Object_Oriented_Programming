#include<bits/stdc++.h>

using namespace std;

class student{
// ei classer baire thekeo access possible,other class and
//other kono function theke
public:
    string name;
    int age;
    int stu_ID;

    void print_class()
    {
        cout << name << " " << age << " " << stu_ID << "\n";
    }
};

int main()
{
    student s1;
 // classer baire theke access korci..info gula
    s1.name= "sumaiya";
    s1.age= 21;
    s1.stu_ID= 210041154;

    s1.print_class();
}
