#include <iostream>
using namespace std;

class Loop{

    private:
    int a=20,b=10;

    public:

    void addLoop(){
        int n=5;
        int sum;
        for(int i;i<n;i++){
            sum = a+b;
            cout <<"\t"<<sum;
        }
    }


};

    int main(){
        Loop A;

        A.addLoop();
       return 0; 
    }