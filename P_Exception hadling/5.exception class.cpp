#include<bits/stdc++.h>
using namespace std;

class Overspeed: public exception{
private:
    int speed;

public:
    const char * what()
    {
        return "check speed\n";
    }
    void getSpeed()
    {
        cout << "car speed: " << speed << "\n";
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }

};


class Car{
private:
    int speed;

public:
    Car()
    {
        speed = 0;
    }

    void accelarate()
    {
        for(;;){
            speed += 10;
            cout << "speed: " << speed << "\n";
            if(speed >= 250){
                Overspeed o;
                o.setSpeed(speed);
                throw o;
            }
        }
    }
};

int main()
{
    Car c;
    try{
        c.accelarate();
    }
    catch(Overspeed o){
        cout << o.what() << "\n";
        o.getSpeed();
    }
}

