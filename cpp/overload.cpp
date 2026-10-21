#include <iostream>
using namespace std;

class overload{

    private:
    int areas,length,width,height,base;

    public:
    void area(int l,int w){
        areas = l*w;
        cout << areas<<endl;
    }

    void area(int s){
        areas = s*s;
        cout << areas<<endl;
    }
};

int main(){
    overload A;

    A.area(20);
    A.area(30,40);

    return 0;
}