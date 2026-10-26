#include <iostream>
using namespace std;

class Time{
  private:
    int hours,minutes;
  public:
    void input(){
      cin >> hours >> minutes;
    
    }
    void addTime(Time t1, Time t2){
      minutes = t1.minutes + t2.minutes;
      hours = t1.hours + t2.hours + minutes/60;
      minutes = minutes % 60;
    }
    void display(){
      cout << hours << "hours" << minutes << "minutes" << endl;
    }
};

int main(){
  Time t1,t2,t3;

  cout << " Enter your first input" << endl;
  t1.input();

  cout << "Enter your second input" << endl;
  t2.input();

  t3.addTime(t1,t2);

  cout << "Display : " << endl;
  t3.display();

  return 0;

}
