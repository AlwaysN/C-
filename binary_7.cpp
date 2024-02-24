#include <iostream>

class MyNumber {
private:
    int value;

public:
    // Constructor
    MyNumber(int val) : value(val) {}

    // Unary operator overloading for negation (-)
    MyNumber operator-() {
        return MyNumber(-value);
    }

    // Binary operator overloading for addition (+)
    MyNumber operator+(const MyNumber& other) {
        return MyNumber(value + other.value);
    }

    // Function to display the value
    void display() {
        std::cout << "Value: " << value << std::endl;
    }};

int main() {
    // Creating instances of MyNumber
    MyNumber num1(5);
    MyNumber num2(10);

    // Unary operator overloading
    MyNumber resultUnary = -num1;
    std::cout << "Unary Operator Overloading:" << std::endl;
    resultUnary.display();

    // Binary operator overloading
    MyNumber resultBinary = num1 + num2;
    std::cout << "Binary Operator Overloading:" << std::endl;
    resultBinary.display();

    return 0;
}
