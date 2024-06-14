#include <iostream>
using namespace std;

template <class T>
class Vector{
public:
    T *a;
    int size;

    Vector(int size)
    {
        this->size = size;
        a = new T[size];
    }

    T dotProduct(Vector &obj)
    {
        T d=0;
        for(int i=0 ; i<size ; i++){
            d += a[i]*obj.a[i];
        }
        return d;
    }
};

int main()
{
    Vector<float> v1(3); //vector 1 with a float data type
    v1.a[0] = 1.4;
    v1.a[1] = 3.3;
    v1.a[2] = 0.1;
    Vector<float> v2(3); //vector 2 with a float data type
    v2.a[0]=0.1;
    v2.a[1]=1.90;
    v2.a[2]=4.1;

    float ans = v1.dotProduct(v2);
    cout<< ans << "\n";
    return 0;
}

