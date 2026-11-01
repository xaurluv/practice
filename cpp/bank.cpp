#include <iostream>
#include <cstdlib>
using namespace std;

class BankAccount{
  private:
    int TotalBalance, WithDrawAmount;
    char OptionOne;
    int Check;
    int DepositeAmount;
  public:
    void InitialInput(){
      cout << "Enter your total balance please:" << endl;
      cin >> TotalBalance;
    }

    void WithDraw(){
      cout << "How much amount do you want to withdraw?" << endl;
      cin >> WithDrawAmount;

      if (WithDrawAmount > TotalBalance){
        cout << "Insufficient Balance! Please Add More Money!" << endl;
        cout << "Do you wanna deposite money? Or Quit??" << endl;
        cout << "Press Q for Quit and M for Adding More Money" << endl;
        cin >> OptionOne;
        if (OptionOne == 'Q' || OptionOne == 'q'){
          exit(0);
        }
        else if (OptionOne == 'M' || OptionOne == 'm'){
          Deposite();
        }
      }
      else{
        TotalBalance = TotalBalance - WithDrawAmount;
        cout << "Your new Balance is : " << TotalBalance << endl;
        Continue();
      }
    }

    void Deposite(){
      cout << "How much amount do you want to input?" << endl;
      cin >> DepositeAmount;

      TotalBalance = TotalBalance + DepositeAmount;
      cout << "Your new Balance is : " << TotalBalance << endl;
      Continue();
    }

    void Continue(){
      cout << "Do you want to continue?" << endl;
      cout << "Press 1 to WithDraw and 2 to Deposite and 3 to Quit!" << endl;
      cin >> Check;

      if (Check == 1){
        WithDraw();
      }
      else if (Check == 2){
        Deposite();
      }
      else if (Check == 3){
        exit(0);
      }
    }
};

int main(){

  BankAccount Acc1;

  Acc1.InitialInput();
  Acc1.WithDraw();

  return 0;
}
