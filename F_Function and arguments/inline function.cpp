#include<bits/stdc++.h>
using namespace std;

/*
recommend not to use inline
1) static variale
2) recursive function
3) loop, switch

*/
inline int Product(int a, int b)
{
    return a*b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << Product(a, b) << endl;

}
