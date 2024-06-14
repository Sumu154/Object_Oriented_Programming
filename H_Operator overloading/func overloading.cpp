#include<bits/stdc++.h>
using namespace std;

class Overloaded{
public:
    void fun()
    {
        cout << "I am a zero argument function\n";
    }

    void fun(int x)
    {
        cout << "I am a int argument function\n";
    }

    void fun(double y)
    {
        cout << "I am a double argument function\n";
    }
};

int main()
{
    Overloaded o;

    o.fun();
    o.fun(2);
    o.fun(3.5);
}

