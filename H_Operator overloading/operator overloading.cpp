#include<bits/stdc++.h>
using namespace std;

template<class T>
class Overloaded{
private:
    T val;

public:
    Overloaded()
    {

    }

    void getdata()
    {
        cin >> val;
    }

    void getRes()
    {
        cout << val << "\n";
    }

    // + operator overload
    Overloaded operator+(Overloaded obj)
    {
        Overloaded res;
        res.val = val + obj.val;     //val = obj1 er val
        return res;                  //obj.val -> obj2 er val
    }

    // ++ operator overload
    void operator++(T)
    {
        val = val + 1;
    }

    // = assignment operator overload
    void operator=(Overloaded obj)
    {
        val = obj.val;
    }

    // += operator overload
    void operator+=(Overloaded obj)
    {
        val = val + obj.val;
    }

};


int main()
{
    Overloaded<int> obj1, obj2, res;

    obj1.getdata();  //5
    obj2.getdata();  //6

    // + operator overload
    cout << "+ overload: sum of 5 6 \n";
    res = obj1 + obj2;
    res.getRes();  //11

    // ++ operator overload
    cout << "++ overload: increment 5 to 6 \n";
    obj1++;
    obj1.getRes();  //6

    // = assignment operator overload
    cout << "= overload: assign value to another object \n";
    obj2 = obj1;
    cout << "obj1: \n";
    obj1.getRes();
    cout << "obj2: \n";
    obj2.getRes();

    // += operator overload
    cout << "+= overloaded: add another object \n";
    obj1 += obj2;
    obj1.getRes();


}


