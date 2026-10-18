#include <iostream>
using namespace std;

class Numbers{
    private:
    int a,b;

    public:
    void input(){
        cout << "enter two numbers";
        cin >> a;
        cin >> b;
    }

    void compare(){
        if (a>b){
            cout <<a<<"is greater than"<<b<<endl;
        }
        else{
            cout <<b<<"is greater than"<<a<<endl;
        }
    }

    void parity(){
        if(a%2==0){
            cout <<"The number" <<a<< "is even!";
        }
        else{
            cout <<"The number " <<a<< " is odd!";
        }
    }
};

int main(){
    Numbers a;

    a.input();
    a.compare();
    a.parity();

    return 0;
}