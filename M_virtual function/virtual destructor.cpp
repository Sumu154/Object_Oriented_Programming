#include <bits/stdc++.h>
using namespace std;
/*
Constructing base
Constructing derived
Destructing derived
Destructing base
*/
class Base{
public:
	Base()
	{
	    cout << "Constructing base\n";
    }
	virtual ~Base()
	{
	    cout << "Destructing base\n";
    }
};

class Derived: public Base{
public:
	Derived()
	{
	    cout << "Constructing derived\n";
    }
	~Derived()
	{
	    cout << "Destructing derived\n";
    }
};

int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}

