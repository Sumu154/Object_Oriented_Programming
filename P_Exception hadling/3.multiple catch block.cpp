#include<bits/stdc++.h>
using namespace std;

int main()
{
    try{
        //throw 20;
        //throw "sumaiya";
        throw runtime_error("runtime error\n");
    }
    catch(const char *e){
        cout << "character error " << e << "\n";
    }
    catch(int e){
        cout << "interger error " << e << "\n";
    }
    catch(runtime_error e){
        cout << e.what() << "\n";
    }
    catch(...){              //for any unknown error
        cout << "some error occured\n" << "\n";    //all types of error
    }
}
