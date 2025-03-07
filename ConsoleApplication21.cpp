#include <iostream>
using namespace std;

int main()
{
	while (true) {
		int randomNumber = rand() % 11;
		int answer;

		cout << "Guess the number from 1 to 10:";
		cin >> answer;
		cout << "\n";

		if (answer == randomNumber) {
			cout << "You guessed!\n";
		} if (answer == 0) {
			return 0;
		}
		else {
			cout << "you didn't guess. It was: " << randomNumber << endl;
		}
	}
}