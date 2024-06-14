#include<bits/stdc++.h>

using namespace std;

class student{
public:
     string name;
     int age;
     int stu_ID;

     //function that printf the info of the class element
     void print_class()
     {
         cout << name << " " << age << " " << stu_ID << "\n";
     }
};

int main()
{
    student s1;
    s1.name= "sumaiya";
    s1.age= 21;
    s1.stu_ID= 210041154;

   s1.print_class();

   student s2;
   s2.name= "Rohan";
   s2.age= 21;
   s2.stu_ID= 210041151;

   s2.print_class();
}
