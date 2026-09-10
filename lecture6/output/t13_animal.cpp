#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }

    virtual ~Animal() {}
};


class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    myDog->makeSound(); 
    myCat->makeSound(); 

    delete myDog;
    delete myCat;

    return 0;
}