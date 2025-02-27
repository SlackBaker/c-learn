#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    int myNumbers[5] = { 10, 20, 30, 40, 50 };
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    for (int i = 0; i <= 100; i += 10) {
        cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }

    string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
    cout << cars[0];

    string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };

    // Loop through strings
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }


}