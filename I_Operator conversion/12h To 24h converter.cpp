#include<bits/stdc++.h>
using namespace std;

class Time12{
private:
    int hour;
    int minute;
    bool pm;    //true=pm,,,false=am

public:
    Time12()
    {
        pm = true;
        hour = 0;
        minute = 0;
    }

    Time12(int hour, int minute, bool pm)
    {
        this->hour = hour;
        this->minute = minute;
        this->pm = pm;
    }

    void diplay()
    {
        cout << "time in 12h system: ";
        if(hour<10){
            cout << "0";
        }
        cout << hour << ":";
        if(minute<10){
            cout << "0";
        }
        cout << minute;
        if(pm){
            cout << " pm\n";
        }
        else{
            cout << "am\n";
        }
    }
};

class Time24{
private:
    int hour;
    int minute;
    int second;

public:
    Time24()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time24(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void display()
    {
        cout << "time in 24h system: ";
        if(hour<10){
            cout << "0";
        }
        cout << hour << " : ";
        if(minute<10){
            cout << "0";
        }
        cout << minute << " : ";
        if(second<10){
            cout << "0";
        }
        cout << second << "\n";
    }
    operator Time12() const;
};

Time24:: operator Time12() const
{
    int hrs24 = hour;
    bool pm;
    if(hour<12){
        pm = false;
    }
    else{
        pm = true;
    }

    int roundMin;
    if(second<30){
        roundMin = minute;
    }
    else{
        roundMin = minute + 1;
    }

    if(roundMin==60){
        roundMin = 0;
        hrs24++;
        if(hrs24==12 or hrs24==24){
            if(pm==true){
                pm = false;
            }
            else{
                pm = true;
            }
        }
    }

    int hrs12;
    if(hrs12<13){
        hrs12 = hrs24;
    }
    else{
        hrs12 = hrs24-12;
    }

    if(hrs12==0){
        hrs12 = 12;
        pm = false;
    }
    return Time12(pm, hrs12, roundMin);
}

int main()
{
    Time24 t24(2, 30, 40);
    t24.display();

    Time12 t12 = t24;
    t12.diplay();
}
