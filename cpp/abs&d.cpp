#include <iostream>
using namespace std;

class Marks{

    private:
    int a,b;
    int result;

    friend class Add;

    public:

    void display(){
        cout << "The result is :" << result << endl;
    }
};

class Add : public Marks{
    public:
    void addition(int x, int y){
        result = x+y;
        display();
    }
};

int main(){
    Add o;
     o.addition(2,3);
     o.display();
    return 0;
}