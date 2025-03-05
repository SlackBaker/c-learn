#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main() {
	queue<string> cars;

	cars.push("Volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");

	cout << cars.front();

	cout << cars.back();

	cars.pop();
	cout << cars.front();

	cout << cars.empty();

	deque<string> carss = { "Volvo", "BMW", "Ford", "Mazda" };

	// Print deque elements
	for (const string& car : carss) {
		cout << car << "\n";
	}

	cout << carss[0];

	cout << carss[1];

	cout << carss.at(1);

	cout << carss.at(2);

	return 0;
}