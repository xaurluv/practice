#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    void input() {
        cin >> feet >> inches;
    }

    Distance Apple(Distance d) {
        Distance result;
        result.inches = inches + d.inches;
        result.feet = feet + d.feet + result.inches / 12;
        result.inches = result.inches % 12;
        return result;
    }

    void display() {
        cout << "The result is: " << feet << " feet and " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance (feet inches): ";
    d1.input();

    cout << "Enter second distance (feet inches): ";
    d2.input();

    d3 = d1.Apple(d2);
    d3.display();

    return 0;
}