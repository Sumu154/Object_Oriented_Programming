#include<bits/stdc++.h>
using namespace std;

class Number{
private:
    int n;

public:
    Number(int n)
    {
        this->n = n;
    }

    void display()
    {
        cout << "Number: " << n << "\n";
    }

    // Conversion operator from int to Number
    Number operator=(int val)
    {
        return Number(val);
    }
};

int main() {
    Number num = 100; // Conversion from int to Number using operator=
    num.display();

    return 0;
}

