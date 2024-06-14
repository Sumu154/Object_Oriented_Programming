 #include<bits/stdc++.h>
using namespace std;

class Student{
protected:
    string name;
    int id;

public:
    void setRoll(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    void display_id()
    {
        cout << "id: " << id << "\n";
    }
};

class Test: virtual public Student{
protected:
    float math;
    float phy;

public:
    void SetMarks(float math, float phy)
    {
        this->math = math;
        this->phy = phy;
    }

    void display_marks()
    {
        cout << "math: " << math << "\n"
             << "physics: " << phy << "\n";
    }
};

class Sports: virtual public Student{
protected:
    float score;

public:
    void setScore(float score)
    {
        this->score = score;
    }

    void display_score()
    {
        cout << "score: " << score << "\n";
    }
};

class Result: public Test, public Sports{
private:
    float total;

public:
    void display()
    {
        total = math+phy+score;
        cout << "name: " << name << "\n"
             << "id: " << id << "\n"
             << "math: " << math << "\n"
             << "phy: " << phy << "\n"
             << "score: " << score << "\n";
//        display_id();
//        display_marks();
//        display_score();
        cout << "total: " << total << "\n";
    }

};

int main()
{
    Result sumu;
    sumu.setRoll("sumaiya", 101);
    sumu.SetMarks(90, 96);
    sumu.setScore(9);
    sumu.display();
}
