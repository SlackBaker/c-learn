#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream iFile;
    string line = "", first = "";
    int location = 0;

    // Відкриваємо файл
    iFile.open("translator.CSV");
    if (!iFile.is_open()) {
        cerr << "Не вдалося відкрити файл translator.CSV" << endl;
        return 1;
    }

    // Пропускаємо заголовок
    getline(iFile, line); // Читаємо перший рядок (заголовок)

    // Читаємо другий рядок
    if (getline(iFile, line)) {
        // Знаходимо першу кому
        location = line.find(",");
        if (location != string::npos) { // Перевіряємо, чи кому знайдено
            first = line.substr(0, location); // Перший елемент
            line = line.substr(location + 1); // Решта рядка
        }
        else {
            cerr << "Помилка: не знайдено роздільника ','" << endl;
            return 1;
        }

        // Виводимо дані
        cout << "Перший елемент: " << first << endl;
        cout << "Решта рядка: " << line << endl;
    }
    else {
        cerr << "Помилка: файл містить недостатньо рядків" << endl;
    }

    // Закриваємо файл
    iFile.close();
    return 0;
}