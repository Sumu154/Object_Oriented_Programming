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

    Complex operator+(const Complex &obj) const;
    Complex operator-(const Complex &obj) const;
    Complex operator*(const Complex &obj) const;
    Complex operator/(const Complex &obj) const;
    //friend Complex operator+(const Complex &o1, const Complex &o2);

/*
    Complex operator+(const Complex &obj) const
    {
        Complex ans;
        ans.real = real + obj.real;
        ans.comp = comp + obj.comp;
        return ans;

    }

    Complex operator-(const Complex &obj) const
    {
        Complex ans;
        ans.real = real - obj.real;
        ans.comp = comp - obj.comp;
        return ans;
    }

    Complex operator*(const Complex &obj) const
    {
        Complex ans;
        ans.real = real*obj.real + comp*obj.comp;
        ans.comp = real*obj.comp + comp*obj.real;
        return ans;
    }

    Complex operator/(const Complex &obj) const
    {
        Complex ans;
        float div = obj.real*obj.real + obj.comp*obj.comp;
        float n1 = real*obj.real + comp*obj.comp;
        float n2 = comp*obj.real - real*obj.comp;
        ans.real = n1/div;
        ans.comp = n2/div;
        return ans;

    }
*/
};


// overloading function outside class
Complex Complex:: operator+(const Complex &obj) const
{
    Complex ans;
    ans.real = real + obj.real;
    ans.comp = comp + obj.comp;
    return ans;
}

Complex Complex:: operator-(const Complex &obj) const
{
    Complex ans;
    ans.real = real - obj.real;
    ans.comp = comp - obj.comp;
    return ans;
}

Complex Complex:: operator*(const Complex &obj) const
{
    Complex ans;
    ans.real = real*obj.real + comp*obj.comp;
    ans.comp = real*obj.comp + comp*obj.real;
    return ans;
}

Complex Complex:: operator/(const Complex &obj) const
{
    Complex ans;
    float div = obj.real*obj.real + obj.comp*obj.comp;
    float n1 = real*obj.real + comp*obj.comp;
    float n2 = comp*obj.real - real*obj.comp;
    ans.real = n1/div;
    ans.comp = n2/div;
    return ans;
}

/*
//overloading function friend function
Complex operator+(const Complex& o1, const Complex &o2)
{
    Complex ans;
    ans.real = o1.real + o2.real;
    ans.comp = o1.comp + o2.comp;
    return ans;
}

*/

int main()
{
    Complex c1(2, 3);
    cout << "number c1: ";
    c1.display();

    Complex c2(4, 5);
    cout << "number c2: ";
    c2.display();

    // + overloading -> 6+8i
    Complex c3;
    c3 = c1 + c2;
    cout << "overloading c1+c2: ";
    c3.display();

    // - overloading -> 2+2i
    Complex c4;
    c4 = c2 - c1;
    cout << "overloading c2-c1: ";
    c4.display();

    // * overloading -> 23+22i
    Complex c5;
    c5 = c1 * c2;
    cout << "overloading c1*c2: ";
    c5.display();

    Complex c6;
    c6 = c2 / c1;
    cout << "overloading c2/c1: ";
    c6.display();

}
