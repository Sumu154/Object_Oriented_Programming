#include<bits/stdc++.h>
using namespace std;

//abstarct base class
class Shape{
protected:
    float area;
    int peri;
    string type;

public:
    virtual void display()=0;   //pure virtual function

};

class Triangle: public Shape{
private:
    int a;

public:
    Triangle(int a)
    {
        type = "Triangle";
        this->a = a;
        area = calArea();
        peri = calPeri();
    }

    float calArea()
    {
        return (sqrt(3)/2)*float(a)*a;
    }

    int calPeri()
    {
        return 3*a;
    }

    void display()
    {
        cout << "Shape: " << type << "\n"
             << "side: " << a << "\n"
             << "area: " << area << "\n"
             << "perimeter: " << peri << "\n\n";
    }
};

class Rectangle: public Shape{
private:
    int a, b;

public:
    Rectangle(int a, int b)
    {
        type = "Rectangle";
        this->a = a;
        this->b = b;
        area = calArea();
        peri = calPeri();
    }

    float calArea()
    {
        return float(a)*b;
    }

    int calPeri()
    {
        return 2*(a+b);
    }

    void display()
    {
        cout << "Shape: " << type << "\n"
             << "sides: " << a << " " << b << "\n"
             << "area: " << area << "\n"
             << "perimeter: " << peri << "\n\n";
    }
};

int main()
{
    Shape *s[5];
    s[0] = new Triangle(3);
    s[1] = new Rectangle(4, 5);

    s[0]->display();
    s[1]->display();
}
