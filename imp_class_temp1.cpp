#include <iostream>

// Class template for a generic Pair
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(const T1& f, const T2& s) : first(f), second(s) {}

    // Method to get the first element of the pair
    T1 getFirst() const {
        return first;
    }

    // Method to get the second element of the pair
    T2 getSecond() const {
        return second;
    }
};

int main() {
    // Creating a Pair of int and double
    Pair<int, double> myPair1(5, 3.14);

    // Creating a Pair of char and string
    Pair<char, std::string> myPair2('A', "Hello");

    // Accessing and printing elements of the first Pair
    std::cout << "First element of myPair1: " << myPair1.getFirst() << std::endl;
    std::cout << "Second element of myPair1: " << myPair1.getSecond() << std::endl;

    // Accessing and printing elements of the second Pair
    std::cout << "First element of myPair2: " << myPair2.getFirst() << std::endl;
    std::cout << "Second element of myPair2: " << myPair2.getSecond() << std::endl;

    return 0;
}
