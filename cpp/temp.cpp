// A basic temperature conversion programme, There might be some bugs around <3

#include <iostream>
using namespace std;

class Thermo{

    private:
    float temp; int choice;
    string redoish;

    public :
    void run(){

        cout << "Please Enter Your Choice \t \a";
        cout << "1 for farenhite to celcius and 2 for celcius to farenhite conversion";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
         cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;
    }

    else if(choice == 2) {
        cout << "Enter temperature in Celsius: ";
            cin >> temp;
        cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
    }

    else {
       cout << "Invalid Choice!!";
    }

    }

    void redo(){

        cout << "Do you want to continue?";
        cout << "type yes and no as it is!";
        cin >> redoish;

        if (redoish == "yes"){
            run();
        }
        else if (redoish == "no"){
            exit;
        }
        else {
            cout << "Invalid! Please Try Again!!";
            redo();
        }
}

};



int main(){

    Thermo t;
    Thermo r;

    t.run();
    r.redo();

    return 0;

}