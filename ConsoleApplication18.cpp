#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
	set<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

	// Print set elements
	for (string car : cars) {
		cout << car << "\n";
	}

	cout << cars.size();

	cars.insert("Tesla");
	cars.insert("VW");
	cars.insert("Toyota");
	cars.insert("Audi");

	cars.erase("Volvo");
	cars.erase("Mazda");

	cars.clear();
	cout << cars.empty();

	set<int, greater<int>> numbers = { 1, 7, 3, 2, 5, 9 };
	// Print the elements
	for (int num : numbers) {
		cout << num << "\n";
	}


	map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

	cout << "John is: " << people["John"] << "\n";

	// Get the value associated with the key "Adele"
	cout << "Adele is: " << people["Adele"] << "\n";
}