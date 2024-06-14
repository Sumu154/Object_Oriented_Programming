#include<bits/stdc++.h>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class myClass{
public:
    T1 a;
    T2 b;
    T3 c;

    myClass(T1 a, T2 b, T3 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void display()
    {
        cout << a << " " << b << " " << c << "\n";
    }
};

int main()
{
    myClass<> m1(4, 6.4, 'c'); //default
    m1.display();

    myClass<float, char, char> m2(1.6, 'o', 'c');
    m2.display();
}
