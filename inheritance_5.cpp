#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating...\n";
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking...\n";
    }
};

// Further derived class inheriting from Dog
class GermanShepherd : public Dog {
public:
    void guard() {
        cout << "German Shepherd is guarding...\n";
    }
};

int main() {
    // Single inheritance example
    Dog myDog;
    myDog.eat();  // Accessing base class method
    myDog.bark(); // Accessing derived class method

    // Multilevel inheritance example
    GermanShepherd myGSD;
    myGSD.eat();    // Accessing base class method
    myGSD.bark();   // Accessing intermediate derived class method
    myGSD.guard();  // Accessing derived class method

    return 0;
}

