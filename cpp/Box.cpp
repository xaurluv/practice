#include <iostream>
#include <iomanip>
using namespace std;

class Box{
    private:
    int side,l,b,h,cube;
    public:

    Box(){
        l=1;
        b=1;
        h=1;
    }

    Box(int side){
     l=side;
     b=side;
     h=side;
    }

    Box(float a, float c, float d){
        l=a;
        b=c;
        h=d;
    }

    float volume(){
        return l*b*h;
    }

};

int main(){
    Box b1;
    Box b2(2);
    Box b3(2,3,4);

cout << left << setw(10) << "Default"  << b1.volume() << endl;
cout << left << setw(10) << "Only one" << b2.volume() << endl;
cout << left << setw(10) << "Three"    << b3.volume() << endl;

    return 0;

}