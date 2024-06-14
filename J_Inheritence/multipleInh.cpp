#include<bits/stdc++.h>
using namespace std;

class Base1{
protected:
    int data1;

public:
    void setData1(int data1)
    {
        this->data1 = data1;
    }
};

class Base2{
protected:
    int data2;

public:
    void setData2(int data2)
    {
        this->data2 = data2;
    }
};

class Base3{
protected:
    int data3;

public:
    void setData3(int data3)
    {
        this->data3 = data3;
    }

};


class DerivedClass: public Base1, public Base2, public Base3{
public:
    void display()
    {
        cout << "value of Base1->data1: " << data1 << "\n";
        cout << "value of Base2->data2: " << data2 << "\n";
        cout << "value of Base3->data3: " << data3 << "\n";
        cout << "sum: " << data1+data2+data3 << "\n";
    }
};

int main()
{
    DerivedClass d;
    d.setData1(24);
    d.setData2(3);
    d.setData3(25);
    d.display();
}
