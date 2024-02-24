#include <iostream>

class FriendClass;

class MyClass {
private:
    int privateData;

public:
    MyClass() : privateData(56) {}

    friend void friendFunction(const MyClass& obj);

    friend class FriendClass;
};
void friendFunction(const MyClass& obj) {
    std::cout << "Friend Function accessing private data: " << obj.privateData << std::endl;
}
class FriendClass {
public:
    void accessPrivateData(const MyClass& obj) {
        std::cout << "FriendClass accessing private data: " << obj.privateData << std::endl;
    }
};

int main() {
    MyClass myObject;
    FriendClass friendObj;
    friendFunction(myObject);
    friendObj.accessPrivateData(myObject);

    return 0;
}

