#include <iostream>
#include <string>
using namespace std;

int main() {

    // && = check if  two  conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state  of it's operand

	int temp;
	bool sunny = false;

	cout << "Enter temperature: ";

	cin >> temp;

	if (temp <= 0 || temp >= 30) {
		cout << "The temperature is bad :(";
	}
	else {
		cout << "The temperature is good :)";
	}

	if(!sunny) {
        cout << "It's cloudy outside :)";
	}
	else {
        cout << "It's sunny outside!";
	}
}
