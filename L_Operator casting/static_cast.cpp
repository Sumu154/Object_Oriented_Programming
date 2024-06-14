#include <iostream>
using namespace std;

class Base{
public:
    int a;

    Base(int a)
    {
        this->a = a;
    }
};

class Derived: public Base{
public:
    int b;

    Derived(int a, int b) : Base(a)
    {
        this->b = b;
    }
};

int main() {
    Derived d(42, 100);

    // Using static_cast to cast the Derived object to the Base class pointer
    Base* bp = static_cast<Base*>(&d);
    cout << "Base value: " << bp->a << endl;

    // Using static_cast to cast the Base class pointer to the Derived class pointer
    Derived* dp = static_cast<Derived*>(bp);
    cout << "Derived value: " << dp->b << endl;
}
