#include<bits/stdc++.h>
using namespace std;

//forward declaration -> jei classer member access hbe ta age declare korte hbe
class Complex;

//friend class -> jei classer member function data access korbe
class Calculator{
public:
    //ei classer je je funciotn access korar permission pabe likhe dite hbe
    int SumReal(Complex, Complex);
    int SumComp(Complex, Complex);
    Complex SumNumber(Complex, Complex);

};

class Complex{
private:
    int a;
    int b;

    friend int Calculator:: SumReal(Complex, Complex);
    friend int Calculator:: SumComp(Complex, Complex);
    friend Complex Calculator:: SumNumber(Complex, Complex);

    //chaile entire classer shb funciotn kei permission dea jabe
    //friend class Calculator;

public:
    void setNumber(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void printNumber()
    {
        cout << a << "+" << b << "i\n";
    }

};

int Calculator:: SumReal(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}

int Calculator:: SumComp(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

Complex Calculator:: SumNumber(Complex o1, Complex o2)
{
    Complex o3;

    int real = o1.a + o2.a;
    int comp = o1.b + o2.b;

    o3.setNumber(real, comp);
    return o3;
}

int main()
{
    Complex c1, c2, c3;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 7);
    c2.printNumber();

    Calculator c;
    int resR = c.SumReal(c1, c2);
    cout << "sum of real parts: " << resR << "\n";
    int resC = c.SumComp(c1, c2);
    cout << "sum of complex parts: " << resC << "\n";

    //setNumber access korar jonno c. dite hbe
    c3 = c.SumNumber(c1, c2);
    c3.printNumber();
}
