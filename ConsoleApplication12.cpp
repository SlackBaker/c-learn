#include <iostream>
using namespace std;

class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class.";
    }
};

// Another base class
class MyOtherClass {
public:
    void myOtherFunction() {
        cout << "Some content in another class.";
    }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass {
};

class Employee {
protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer : public Employee {
public:
    int bonus;
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();

    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";

    return 0;
}