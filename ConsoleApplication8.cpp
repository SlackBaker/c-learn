#include <iostream>
using namespace std;

void Myfunction() {
	cout << "that's my first function";
}

void congreeding(string name) {
	cout << "Your name is " << name << "." << endl;
}

void state(string state = "Norway") {
	cout << state;
}

void total(int age, string name) {
	cout << "you are " << age << "You are " << name << endl;
}

int returner(int x) {
	return 5 + x;
}

void swapNums(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}

void myFunction(int myNumbers[5]) {
	for (int i = 0; i < 5; i++) {
		cout << myNumbers[i] << "\n";
	}
}

int main() {
	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	myFunction(myNumbers);

	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	// Call the function, which will change the values of firstNum and secondNum
	swapNums(firstNum, secondNum);

	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	Myfunction();
	congreeding("fkfkf");
	state();
	state("Ukraine");
	total(5, "steve");
	cout << returner(2);
	return 0;
}