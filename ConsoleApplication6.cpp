#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;

    // Введення меж для двох масивів
    cout << "Введіть максимальне значення для першого масиву (x): ";
    cin >> x;
    cout << "Введіть максимальне значення для другого масиву (y): ";
    cin >> y;

    // Створення двох масивів
    vector<int> arrayX, arrayY;
    for (int i = 1; i <= x; i++) {
        arrayX.push_back(i);
    }
    for (int j = 1; j <= y; j++) {
        arrayY.push_back(j);
    }

    // Виведення таблиці множення
    cout << "Таблиця множення:" << endl;
    for (int i = 0; i < arrayX.size(); i++) {
        for (int j = 0; j < arrayY.size(); j++) {
            cout << arrayX[i] * arrayY[j] << "\t";
        }
        cout << endl;
    }

    return 0;
}