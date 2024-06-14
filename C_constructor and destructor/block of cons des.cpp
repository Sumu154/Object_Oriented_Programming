#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count=0;

class Number{
public:
    Number()
    {
        count++;
        cout << "constructor is called for object " << count << "\n";
    }

    ~Number()
    {
        cout << "destructor is called for object " << count <<"\n";
        count--;
    }
};


int main()
{
    cout << "inside our main function " << "\n";
    cout << "Creating first object n1" << "\n";

    //this is a block of object n1..
    Number n1;
    {
        cout << "Entering this block" << "\n";
        cout<<"Creating two more objects" << "\n";
        Number n2, n3;
        cout<<"Exiting this block" << "\n";
    }            //block shesh hole n3, n2 er destructor call hbe

    cout << "Back to main" << "\n";
    //program bondho korar age n1 er destructor call hbe
}
