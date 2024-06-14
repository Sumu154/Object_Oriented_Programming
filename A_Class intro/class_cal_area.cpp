#include<bits/stdc++.h>

using namespace std;

class rectangle{
public:
    int height;
    int width;

    int area()
    {
        return height*width;
    }

    int perimeter()
    {
        return 2*(height+width);
    }
};

int main()
{
    rectangle r1;
    r1.height= 2;
    r1.width= 3;

    cout << r1.area() << "\n" << r1.perimeter();
}
