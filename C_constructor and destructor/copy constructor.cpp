#include<bits/stdc++.h>
using namespace std;

class Number{
private:
    int a;

public:
    Number()
    {
        cout << "default constructor called\n";
        a = 0;
    }

    Number(int a)
    {
        cout << "parameterized constructor called\n";
        this->a = a;
    }

    // when no copy constructor is written compiler will apply its own copy constructor
    //so...ei constructor na likhleo copy constructorer kaj thik e hbe
    Number(Number &obj)
    {
        cout << "copy constructor called\n";
        a = obj.a;
    }

    void display()
    {
        cout << "the number for object: " << a << "\n\n";
    }
};

int main()
{
    Number x;
    x.display();

    Number y;
    y.display();

    Number z(45);
    z.display();

    // copy constructor duivabe initialize kora jay
    // z1 initialize korte chaiteci z er value diye
    Number z1(z);          // Copy constructor invoked
    z1.display();

    Number z2 = z;         // Copy constructor invoked
    z2.display();

    //ekhane kono copy constructor called hoy nai..object create korar somoy
    //initialize korle called hbe,,,otherwise
    Number z3;
    z3 = z;
    z3.display();

}
