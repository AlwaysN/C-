#include <iostream>

// Base class
class Animal {
public:
    // Virtual function speak
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the speak method of the base class
    void speak() override {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Animal* animalPtr;
    Animal animal;
    Dog dog;

    // Pointing to the base class object
    animalPtr = &animal;
    // Calls the base class method
    animalPtr->speak();

    // Pointing to the derived class object
    animalPtr = &dog;
    // Calls the overridden method of the derived class
    animalPtr->speak();

    return 0;
}
