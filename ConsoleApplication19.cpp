#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

	// Create a vector iterator called it
	vector<string>::iterator it;

	// Loop through the vector with the iterator
	for (it = cars.begin(); it != cars.end(); ++it) {
		cout << *it << "\n";
	}

	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

	// Sort cars alphabetically
	sort(cars.begin(), cars.end());

	vector<int> numbers = { 1, 7, 3, 5, 9, 2 };

	// Sort numbers numerically
	sort(numbers.begin(), numbers.end());
	sort(numbers.rbegin(), numbers.rend());
	sort(numbers.begin() + 3, numbers.end());
	sort(numbers.begin(), numbers.end());

	// Find the first value that is greater than 5 in the sorted vector
	auto it = upper_bound(numbers.begin(), numbers.end(), 5);

	int randomNum = rand() % 101;

	cout << randomNum;

	srand(time(0));

	// Generate a random number between 0 and 100
	int randomNum1 = rand() % 101;

	cout << randomNum1;

}