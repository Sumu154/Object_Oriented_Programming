#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2>
float findAvg(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{
    float ans;
    ans = findAvg(5, 2);
    cout << ans << "\n";
}
