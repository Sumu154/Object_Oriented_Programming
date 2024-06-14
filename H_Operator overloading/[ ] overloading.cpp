#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 10;

class Array{
private:
    int a[MAX_SIZE];

public:
    Array(int x, int y)
    {
        a[0] = x;
        a[1] = y;
    }

    int &operator[](int i)
    {
        if( i > MAX_SIZE ) {
        cout << "Index out of bounds" << "\n";
            return a[0];
        }

        return a[i];
    }
};

int main()
{
   Array a(1, 4);

   cout << "Value of A[2] : " << a[0] << "\n";
   cout << "Value of A[5] : " << a[1] << "\n";
   cout << "Value of A[12] : " << a[12] << "\n";

}
