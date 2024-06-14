#include<bits/stdc++.h>
using namespace std;

//converting inches to centimeter and vice versa

class Inches{
private:
    double inch;

public:
    Inches(double inch)
    {
        this->inch = inch;
    }

    void display() const
    {
        cout << inch << " inches" << endl;
    }

    // Conversion operator to convert Inches to Centimeters
    operator double() const
    {
        return inch * 2.54;
    }

};

class Centimeter{
private:
    double cent;

public:
    Centimeter(double cent)
    {
        this->cent = cent;
    }

    void display() const {
        cout << cent << " centimeters" << "\n";
    }

    operator Inches() const
    {
        return Inches(cent/2.54);
    }
};

int main()
{
    Inches i1(10.0);
    double c1 = i1;
    cout << i1 << " is equal to " << c1 << " centimeters" << "\n";

    Centimeter c2(25.4);
    Inches i2 = c2;
    i2.display();

}
