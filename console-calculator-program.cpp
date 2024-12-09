#include <iostream>
using namespace std;

int main () {

    char op;
    double num1;
    double num2;
    double result;

    cout << "************* CALCULATOR *************" << '\n' << '\n';

    cout << "Enter either (+ - * /)" << '\n';

    cin >> op;

    cout << "Enter 1st number: " << '\n';

    cin >> num1;

    cout << "Enter 2nd number: " << '\n';

    cin >> num2;

    switch (op) {

    case '+':
            result = num1 + num2;
            cout << "Result: " << result << '\n' << '\n';
            break;
    case '-':
            result = num1 - num2;
            cout << "Result: " << result << '\n' << '\n';
            break;
    case '*':
            result = num1 * num2;
            cout << "Result: " << result << '\n' << '\n';
            break;
    case '/':
            result = num1 / num2;
            cout << "Result: " << result << '\n' << '\n';
            break;
    default:
            cout << "Enter either (+ - * /) only!" << '\n' << '\n';
            break;

    }

    cout << "**************************************" << '\n';

    return 0;

}
