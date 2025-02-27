#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    struct {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    enum Level {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 75
    };

    string food = "Pizza";

    cout << &food;

    string food1 = "Pizza";  // A food variable of type string
    string* ptr = &food1;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food1 << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food1 << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";
}