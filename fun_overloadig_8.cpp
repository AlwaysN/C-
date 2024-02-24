#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;

    // Call to the first overloaded function
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << std::endl;

    // Call to the second overloaded function
    std::cout << "Sum of " << num1 << ", " << num2 << " and " << num3 << " is: " << add(num1, num2, num3) << std::endl;

    return 0;
}
