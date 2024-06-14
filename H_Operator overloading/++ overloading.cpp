#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    int real;
    int comp;

public:
    Complex()
    {
        real = 0;
        comp = 0;
    }

    Complex(int real, int comp)
    {
        this->real = real;
        this->comp = comp;
    }

    void display()
    {
        cout << real << "+" << comp << "i" << "\n";
    }

    void operator++()  //unary operator..so kono object pass hbe na
    {
        ++real;
        ++comp;
    }

    void operator--()
    {
        --real;
        --comp;
    }

    void operator++(int)  //unary operator..so kono object pass hbe na
    {
        real++;
        comp++;
    }

    void operator--(int)
    {
        real--;
        comp--;
    }
};

int main()
{
    Complex c1(2, 3);
    cout << "number c1: ";
    c1.display();

    cout << "after pre increment c1: \n";
    ++c1;
    c1.display();
    cout << "\n";

    cout << "after post increment c1: \n";
    c1++;
    c1.display();
    cout << "\n";

    cout << "after pre decrement c1: \n";
    --c1;
    c1.display();
    cout << "\n";

    cout << "after post decrement c1: \n";
    c1--;
    c1.display();
    cout << "\n";

}
