#include<iostream>
using namespace std;
class MyClass {
public:
    static int staticVariable;
    int nonStaticVariable;
    static void staticMemberFunction() {
        std::cout << "Static member function called." << std::endl;
    }
    void nonStaticMemberFunction() {
        std::cout << "Non-static member function called." << std::endl;
    }
};
int MyClass::staticVariable = 0;

int main() {

    MyClass::staticVariable = 5;
    std::cout << "Static variable value: " << MyClass::staticVariable << std::endl;

    MyClass obj;
    obj.nonStaticVariable = 10;
    std::cout << "Non-static variable value: " << obj.nonStaticVariable << std::endl;
    MyClass::staticMemberFunction();
    obj.nonStaticMemberFunction();

    return 0;
}


