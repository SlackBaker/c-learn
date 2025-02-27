#include <iostream>
#include <string>

using namespace std;

int main()
{
    // hi Josh

    cout << "Hello World!\n";
    cout << "Well 3x!\n";
    cout << 4 << endl;
    cout << 5 + 5;
    cout << 5 * 2 << endl;

    cout << "They call him \"John\"";

    cout << endl;

    string name = "Josh";
    int age = 18;
    double height = 1.89;
    bool aLive = true;

    cout << "Hi my name is" << name << "!";
    cout << age << endl;



    int x = 6, y = 5, z = 7;
    cout << x + y+ z << endl;

    int m, h, g;
    m = h = g = 50;
    cout << m + h + g;

    const double pi = 3.14;

    string name = "John";
    string surname = "Peterson";

    cout << name.append(surname);
    cout << name[0];

    string l;
    cout << "Write your name";
    cin >> l;
    cout << "Your name is: " << l;

    string txt = "jdhgghdljhgdhgjghdkj";
    cout << txt.length(); // size = length

    string name = "John";
    string surname = "Peterson";

    cout << name.append(surname);
    cout << name[0];

    return 0;
}