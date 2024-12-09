#include <iostream>
using namespace std;

int main () {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Welcome to the site :)" << endl;
    } else if (age < 0) {
        cout << "You haven't been born yet! XD";
    } else {
        cout << "You're not old enough to enter :(";
    }

    return 0;

}
