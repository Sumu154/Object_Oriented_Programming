#include<bits/stdc++.h>
using namespace std;

void test() throw(int, char, runtime_error)
{
    //throw 20;
    //throw 'c';
    throw runtime_error("what");
}

int main()
{
    try{
        test();
    }
    catch(int e){
        cout << "integer type\n";
    }
    catch(char e){
        cout << "character type\n";
    }
    catch(runtime_error e){
        cout << "runtime error type " << e.what() << "\n";
    }
}
