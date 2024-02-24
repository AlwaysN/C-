#include <iostream>

class Foo {
private:
    int myX;

public:
    Foo(int myX) {
        this->myX = myX;                                                                           // Use 'this' pointer to differentiate between member variable and local variable
    }

    void printX(int f) {
        std::cout << "myX: " << this->myX << ", f: " << f << std::endl;                                    // Use 'this' pointer to refer to member variable
    }
};

int main() {
    Foo foo(5);
    foo.printX(10);

    return 0;
}