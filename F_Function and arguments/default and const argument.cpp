#include<bits/stdc++.h>
using namespace std;

class Interest{
private:
    int currentMoeny;

    Interest()
    {

    }
    //default argument
    float moneyRec(int currentMoeny, float rate=1.04)
    {
        return currentMoeny * rate;
    }

    //constant argument
    int getdata(const int currentMoeny)
    {
        return currentMoeny;
    }

};

int main()
{

}
