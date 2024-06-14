#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10, b=0, c;
    try{
        if(b==0){
            throw runtime_error("divide by zero error\n");
        }
        c=a/b;
        cout << c << "\n";
    }
    catch(runtime_error &error){
        cout << "exception occured\n";
        cout << error.what();
    }
}

