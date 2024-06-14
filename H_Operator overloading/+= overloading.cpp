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

    void operator+=(const Complex &obj);
    void operator-=(const Complex &obj);
    void operator*=(const Complex &obj);
 /*
    void operator+=(const Complex &obj)
    {
        real = real + obj.real;
        comp = comp + obj.comp;
    }

    void operator-=(const Complex &obj)
    {
        real = real - obj.real;
        comp = comp - obj.comp;
    }

    void operator*=(const Complex &obj)
    {
        int temp_real = real;     //c1.real ke store kore rakhte hbe karon
        real = real*obj.real + comp*obj.comp;   //ei line e c1.real part change hoye gece
        comp = temp_real*obj.comp + comp*obj.real;
    }

    */

};

void Complex:: operator+=(const Complex &obj)
{
    real = real + obj.real;
    comp = comp + obj.comp;
}

void Complex:: operator-=(const Complex &obj)
{
    real = real - obj.real;
    comp = comp - obj.comp;
}

void Complex:: operator*=(const Complex &obj)
{
    int temp_real = real;     //c1.real ke store kore rakhte hbe karon
    real = real*obj.real + comp*obj.comp;   //ei line e c1.real part change hoye gece
    comp = temp_real*obj.comp + comp*obj.real;
}


int main()
{
    Complex c1(2, 3);
    cout << "number c1: ";
    c1.display();

    Complex c2(4, 5);
    cout << "number c2: ";
    c2.display();

    // + overloading -> 6+8i
    c1 += c2;
    cout << "overloading c1+=c2: ";
    c1.display();

    // - overloading -> 2+3i
    c1 -= c2;
    cout << "overloading c1-=c2: ";
    c1.display();

    // * overloading -> 23+22i
    c1 *= c2;
    cout << "overloading c1*=c2: ";
    c1.display();

}

