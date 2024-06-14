#include<bits/stdc++.h>
using namespace std;

class BaseClass{
private:
    int data1;

public:
    int data2;

    void setData()
    {
        data1 = 10;
        data2 = 20;
    }

    int getData1()
    {
        return data1;
    }

    int getData2()
    {
        return data2;
    }

};

class DerivedClass : public BaseClass{
private:
    int data3;

public:
    void process()
    {
        data3 = data2*getData1();
    }

    void display()
    {
        cout << "data 1: " << getData1() << "\n";
        cout << "data 2: " << data2 << "\n";
        cout << "data 3: " << data3 << "\n";
    }
};

int main()
{
    DerivedClass d;
    d.setData();
    d.process();
    d.display();
}
