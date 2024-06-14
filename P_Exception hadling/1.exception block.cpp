#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, ans;
    cin >> a >> b;
    try{
        if(b==0){
            //throw "devide by zero error\n";
            throw b;
        }
        ans = a/b;
        cout << ans << "\n";
    }
//    catch(const char *e){
//        cout << "exception occured\n" << e;
//    }
    catch(int e){
        cout << "divide by " << e << " error\n";
    }

}

