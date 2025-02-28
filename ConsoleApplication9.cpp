#include <iostream>
using namespace std;

class MyClass {       // The class
public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class Car {
public:
    int year = 1999;
    string model = "BMW";
    void Sound() {
        cout << "Beeep";
    }
};

class Dog {
public:
    void Dog_Sound();
};

void Dog::Dog_Sound() {
    cout << "Wuh!!!";
}

int main() {
    MyClass myobject;

    myobject.myNum = 10;
    myobject.myString = "gjhjgjg";

    cout << myobject.myNum << "\n";
    cout << myobject.myString << endl;

    Car car;

    car.Sound();

    cout << endl;

    Dog dog;

    dog.Dog_Sound();

}