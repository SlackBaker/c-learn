#include <iostream>
using namespace std;
int main()
{
	int x, y;
	string action;

	cout << "write first numebr:";
	cin >> x;
	cout << endl;
	cout << "write second number";
	cin >> y;
	cout << endl;
	cout << "write the action \"+, -, *, :, % \": ";
	cin >> action;

	if (action == "+") {
		cout << x + y;
	} if (action == "-") {
		cout << x - y;
	} if (action == "*") {
		cout << x * y;
	} if (action == ":") {
		cout << x / y;
	} if (action == "%") {
		cout << x % y;
	}
}