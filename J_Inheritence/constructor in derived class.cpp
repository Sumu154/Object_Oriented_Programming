#include<bits/stdc++.h>
using namespace std;

class  Base1{
protected:
    int a;
public:
    Base1(int a)
    {
        this->a = a;
        cout << "Base1 constructor called\n";
    }

    void printBase1()
    {
        cout << "a: " << a << "\n";
    }
};

class Base2{
protected:
    int b;
public:
    Base2(int b)
    {
        this->b = b;
        cout << "Base2 constructor called\n";
    }

    void printBase2()
    {
        cout << "b: " << b << "\n";
    }
};

class Derived: public Base1, public Base2{
protected:
    int c, d;
public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b)
    {
        this->c = c;
        this->d = d;
        cout << "Derived constructor  called\n";
    }

    void printDerived()
    {
        cout << "c: " << c << "\n"
             << "d: " << d << "\n";
    }
};

int main()
{
    Derived d(1, 2, 3, 4);
    d.printBase1();
    d.printBase2();
    d.printDerived();
}
