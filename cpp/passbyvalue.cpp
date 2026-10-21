#include <iostream>
using namespace std;

class Pass{
    public:
    int a,b,sum;

    void passbyValue(int &x,int &y){
        sum = x+y;
        cout << sum;
    }
};

int main(){
    Pass A;
int x = 100, y=300;
    A.passbyValue(x,y);

    return 0;
}

