#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2>
class myClass{
public:
    T1 a;
    T2 b;

    myClass(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << a << " " << b << "\n";
    }
};

int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
}
