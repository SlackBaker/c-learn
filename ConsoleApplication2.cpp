#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // typical math
    cout << "Hello World!\n";
    cout << max(5, 10) << endl;
    cout << min(5, 10) << endl;

    // cmath
    cout << sqrt(9) << endl;
    cout << log(4) << endl;
    cout << round(6.6) << endl;

    //bool exprasion
    int x = 9;
    int y = 6;
    cout << (x > y);
    cout << (x < y);

    int myAge = 25;
    int votingAge = 18;

    cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!

    // if else

    if (18 > 12){
        cout << "ghghgh";
    }

    int gh = 6;
    int f = 4;
    if (f > gh) {
        cout << "lol";
    }
    else if (f == gh) {
        cout << "piska";
    }
    else {
        cout << "not lol";
    }

    //switch
    int day = 4;
    switch (day) {
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
    }

    //while
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    //while do

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

}