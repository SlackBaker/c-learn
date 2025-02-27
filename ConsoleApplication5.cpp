#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;

    for (int i = 0; i < size; i++) {
        cout << arr[i];
        for (int j = 0; j < 10; j++) {
            cout << arr[i] << " * " << arr[j] << " = " << arr[i] * arr[j] << "\t";
        }
        cout << endl;
    }

    cout << endl; 
    return 0;
}