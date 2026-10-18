#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog says: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Cat says: Meow!" << endl;
    }
};

int main() {
    Animal *ptr;     

    Dog d;
    Cat c;

    ptr = &d;
    ptr->speak();     

    ptr = &c;
    ptr->speak();     

    return 0;

}