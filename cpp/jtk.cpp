#include <iostream>
using namespace std;

class Pass{
    private:
    int addition;

    public:

void mynum(int x, int y){
addition = x + y;

}

};

int main(){
    int a,b;
    Pass ma;

    a=5;
    b=5;

    ma.mynum(a,b);

    return 0;

}