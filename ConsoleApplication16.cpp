#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

int main() {
    // Робота з vector
    vector<string> carsVector = { "BMW", "Mercedes", "Porshe" };

    for (string car : carsVector) {
        cout << car << "\n";
    }

    cout << carsVector[0] << "\n";
    cout << carsVector.front() << "\n";
    cout << carsVector.back() << "\n";
    cout << carsVector.at(1) << "\n";

    carsVector[0] = "Volvo";
    cout << carsVector[0] << "\n";

    carsVector.at(0) = "Opel";
    cout << carsVector.at(0) << "\n";

    carsVector.push_back("Tesla");
    carsVector.pop_back();

    cout << "Size of vector: " << carsVector.size() << endl;
    cout << "Is vector empty? " << carsVector.empty() << "\n";

    for (int i = 0; i < carsVector.size(); i++) {
        cout << carsVector[i] << "\n";
    }

    cout << "\n";

    // Робота з list
    list<string> carsList = { "Volvo", "BMW", "Ford", "Mazda" };

    for (string car : carsList) {
        cout << car << "\n";
    }

    cout << "First element (list): " << carsList.front() << "\n";
    cout << "Last element (list): " << carsList.back() << "\n";

    cout << "\n";

    // Робота з stack
    stack<string> carsStack;

    carsStack.push("Volvo");
    carsStack.push("BMW");
    carsStack.push("Ford");
    carsStack.push("Mazda");

    while (!carsStack.empty()) {
        cout << "Top of stack: " << carsStack.top() << "\n";
        carsStack.pop();
    }

    carsStack.top();

    return 0;
}