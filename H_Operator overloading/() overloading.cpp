#include <iostream>
using namespace std;

class Distance{
private:
    int feet;
    int inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }

    Distance(int feet, int inch)
    {
        this->feet = feet;
        this->inch = inch;
    }

    Distance operator()(int a, int b, int c)
    {
        Distance ans;
        ans.feet = a+c+10;
        ans.inch = b+c+100 ;
        return ans;
    }

    void displayDistance() {
        cout << feet << " feet " << inch << " inches\n";
    }
};

int main() {
   Distance d1(11, 10), d2;

   cout << "First Distance : ";
   d1.displayDistance();

   d2 = d1(10, 10, 10);
   cout << "Second Distance :";
   d2.displayDistance();

   return 0;
}
