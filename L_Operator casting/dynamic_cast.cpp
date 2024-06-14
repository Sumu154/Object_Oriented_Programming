#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    virtual void display() const
    {
        cout << "Base class display()" << "\n";
    }
};

class Derived: public Base {
public:
    void display() const
    {
        cout << "Derived class display" << "\n";
    }
};

int main()
{
    Derived d;

    // Using dynamic_cast to cast the Base class pointer to the Derived class pointer
    Base* bp = &d;
    Derived* dp = dynamic_cast<Derived*>(bp);

    // Checking if the dynamic_cast was successful
    if(dp!=nullptr){
        dp->display();
    }
    else{
        cout << "Dynamic cast failed." << endl;
    }
}

