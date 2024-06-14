#include <iostream>
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

    // Conversion operator from Number to int
    operator int() const
    {
        return n;
    }
};

int main() {
    Number n1(100);

    // Conversion from Number to int using operator int()
    int val = n1;

    cout << "Value as int: " << val << "\n";

    return 0;
}

