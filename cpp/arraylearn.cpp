#include <iostream>
using namespace std;

class Student{
  private:
    string name,course;
    int id,age;
  public:

    void inputArray(){
      cout<<"Enter your id : " << endl;
        cin >> id;
      cout << "Enter your name :" << endl;
      cin >> name;
      cout << "Enter your course :"<< endl;
      cin >>course;
      cout << "Enter your age : "<< endl;
      cin >> age;
    }

    void displayArray(){
      cout << id << endl;
        cout << name << endl;
        cout << age << endl;
        cout << course << endl;
    }

};

int main(){
  Student A[3];

  A[0].inputArray();
  A[0].displayArray();


  return 0;
}
