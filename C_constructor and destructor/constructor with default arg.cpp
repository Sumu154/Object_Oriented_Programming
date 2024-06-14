#include<iostream>
using namespace std;

class Simple{
    int a;
    int b;
    int c;

    public:
        /*
        // way 1 ->
        Simple(int a, int b=9, int c=8){
            this->a = a;
            this->b = b;
            this->c = c;
        }*/

        // way 2 ->
        Simple(int a, int b=9, int c=8) : a(a), b(b), c(c) {}

        /*
        //way 3 ->
        Simple(
            int numa = 0,
            int numb = 9,
            int numc = 8
        ): a(numa), b(numb), c(numc){}
        */

        // this and way 2 is different
        //Simple(int a, int b=9, int c=8) : a(this->a), b(this->b), c(this->c) {}

        void printData()
        {
            cout<< a << " " << b<< " " << c << "\n";
        }

};


int main()
{
    Simple s(12, 13);
    s.printData();
    return 0;
}

