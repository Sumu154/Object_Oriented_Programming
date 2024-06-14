#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    int a;
    int b;

    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void printNumber()
    {
        cout << a << "+" << b << "i" << "\n";
    }
};

//friend function -> classer baire thekeo classer private data access korte pare
Complex sumComplex(Complex o1, Complex o2)
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

    c1.setNumber(3, 5);
    c1.printNumber();

    c2.setNumber(4, 7);
    c2.printNumber();

    c3 = sumComplex(c1, c2);
    c3.printNumber();



}
