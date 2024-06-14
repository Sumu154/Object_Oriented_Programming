#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    int real;
    int comp;

public:
    void setData(int real, int comp)
    {
        this->real = real;
        this->comp = comp;
    }

    /*
    // way 1 ->
    void add(Complex o1, Complex o2)
    {
        real = o1.real + o2.real;
        comp = o1.comp + o2.comp;
    }*/

    // way 2 ->
    Complex add(Complex obj)
    {
        Complex ans;
        ans.real = real + obj.real;
        ans.comp = comp + obj.comp;
        return ans;
    }


    void getData()
    {
        cout << real << "+" << comp << "i\n";
    }

};

int main()
{
    Complex c1, c2, c3;

    c1.setData(2, 3);
    c2.setData(4, 5);

    //c3.add(c1, c2);
    c3 = c1.add(c2);
    c3.getData();
}
