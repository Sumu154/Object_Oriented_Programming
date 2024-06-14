#include<bits/stdc++.h>
using namespace std;
const int size = 50;

class String{
private:
    char s[size];

public:
    String()
    {
        s[0] = '\0';
    }

    String(char str[])
    {
        strcpy(s, str);
    }

    void display()
    {
        cout << s << "\n";
    }

    void concat(String obj)
    {
        if(strlen(s)+strlen(obj.s) < size){
            strcat(s, obj.s);
        }
        else{
            cout << "string too long\n";
        }
    }
};

int main()
{
    String s1("Sumaiya");
    String s2 = "Tasnim";

    s1.concat(s2);

    cout << "string s1: ";
    s1.display();

    cout << "string s2: ";
    s2.display();

}
