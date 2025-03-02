#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() {

	ofstream MyFile("filename.txt");

	// Write to the file
	MyFile << "Files can be tricky, but it is fun enough!";

	// Close the file
	MyFile.close();

	try {
		int age = 15;
		if (age >= 18) {
			cout << "Access granted - you are old enough.";
		}
		else {
			throw (age);
		}
	}
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << myNum;
	}

	time_t timestamp;
	time(&timestamp);

	// Display the date and time represented by the timestamp
	cout << ctime(&timestamp);
}