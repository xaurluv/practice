#include <iostream>
using namespace std;

int main(){

    int num=324,temp=0,digit;

    while(num!=0){

        digit = num % 10;
        temp = temp*10 + digit;
        num = num/10;
        
    }

    cout << temp;

    return 0;

}