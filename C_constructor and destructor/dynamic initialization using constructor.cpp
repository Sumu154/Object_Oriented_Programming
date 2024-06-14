#include<bits/stdc++.h>
using namespace std;

class BankDeposit{
private:
    int principal;
    int year;
    float rate;
    float returnMoney;

public:
    BankDeposit()
    {

    }
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R);
    void getValue();

};

BankDeposit:: BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    rate = r;

    returnMoney = principal;
    for(int i=0 ; i<year ; i++){
        returnMoney = returnMoney * (1+rate);
    }
}

BankDeposit:: BankDeposit(int p, int y, int R)
{
    principal = p;
    year = y;
    rate = float(R)/100;

    returnMoney = principal;
    for(int i=0 ; i<year ; i++){
        returnMoney = returnMoney * (1+rate);
    }
}

void BankDeposit:: getValue()
{
    cout << "return money: " << returnMoney << "\n";
}

int main()
{
    BankDeposit b1, b2, b3;

    int p, y;
    int R;
    float r;

    cin >> p >> y >> r; // 100 1 0.03
    b1 = BankDeposit(p, y, r);
    b1.getValue();

    cin >> p >> y >> R;   // 100 1 3
    b2 = BankDeposit(p, y, R);
    b2.getValue();
}
