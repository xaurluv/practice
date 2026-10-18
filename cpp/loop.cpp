#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin >> ws, name);   
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Name: " << name << "\tID: " << id << "\tSalary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "How many employees? ";
    cin >> n;

    Employee emp[n];   

    for (int i = 0; i < n; i++) {
        emp[i].input();
    }

    for (int i = 0; i < n; i++) {
        emp[i].display();
    }

    return 0;
}