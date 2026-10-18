// It is  a simple bank system!

#include <iostream>
using namespace std;

class Bank{

    private:
    int bal; int dep; int wit;

    public:
    void balance(){
        cout<<"Please enter the amount of balance that you have!";
        cin >> bal;
    }

    void withdraw(){
        cout<<"Please enter the amount of money you want to withdraw:";
        cin>>wit;

        if (wit>bal){
            cout << "You dont have enough money!";
            withdraw();
        }
        else{

        bal = bal - wit;

        cout <<"You have withdrawn \t " << wit <<" \t amount and now you have only \t " << bal << endl; 
        }

    }

    void deposite(){
        cout <<"Please enter the amount you want to have deposited:";
        cin >> dep;

        bal = bal + dep;

        cout << "You have deposited \t" << dep << "\t amount and now you have " << bal << endl;
    }


};

int main(){
    Bank a;

    a.balance();
    a.withdraw();
    a.deposite();

    return 0;
}