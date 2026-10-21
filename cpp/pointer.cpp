#include <iostream>
using namespace std;

int main(){
    int *pointer;
    int num = 10;
    pointer=&num;

    cout << num << endl;
    cout << *pointer << endl;
    cout << &pointer << endl;

    return 0;

}