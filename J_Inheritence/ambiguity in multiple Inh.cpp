#include<bits/stdc++.h>
using namespace std;

class Base1{
protected:
    int a;
public:
    void display()
    {
        cout << "hi i am Base1\n";
    }
};

class Base2{
protected:
    int b;
public:
    void display()
    {
        cout << "hi i am Base1\n";
    }
};

class derived: public Base1, public Base2{
protected:
    int c;
public:
//    void display()   //1)overriding -> derived classe function thakle
//    {                             // base classe khujte jabe na
//        cout << "hi i am derived\n";
//    }

//    void display()    //2):: ->kon base classer function use korte chacci
//    {                        //oita declare kore dite pari
//        Base1:: display();
//    }

};

int main()
{
//    derived d;
//    d.display();

    derived d;            //3)main eo decalre korte pari
    d.Base1:: display();    //kon base class use hbe



}
