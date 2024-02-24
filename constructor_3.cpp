#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called!" << std::endl;
    }

    // Parameterized constructor
    MyClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        std::cout << "Copy constructor called!" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    // Default constructor called
    MyClass obj1;

    // Parameterized constructor called
    MyClass obj2(10);

    // Copy constructor called
    MyClass obj3 = obj1;

    // Destructor called for all objects when they go out of scope
    
    return 0;
}
