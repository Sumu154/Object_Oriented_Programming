#include<bits/stdc++.h>
using namespace std;

class Marks{
private:
    int mark;

public:
    Marks(int mark)
    {
        this->mark = mark;
    }

    void display()
    {
        cout << "mark: " << mark << "\n";
    }

    Marks *operator->()
    {
        return this;
    }

};

int main()
{
    Marks m(99);
    m.display();
    m->display();
}
