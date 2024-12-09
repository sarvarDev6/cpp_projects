#include <iostream>
using namespace std;

int main () {

    int month;
    cout << "Enter  the month (1-12)" << '\n';
    cin >> month;

    switch(month) {
    case 1:
        cout << "It's January" << '\n';
        break;
    case 2:
        cout << "It's February" << '\n';
        break;
    case 3:
        cout << "It's March" << '\n';
        break;
    case 4:
        cout << "It's April" << '\n';
        break;
    case 5:
        cout << "It's May" << '\n';
        break;
    case 6:
        cout << "It's June" << '\n';
        break;
    case 7:
        cout << "It's July" << '\n';
        break;
    case 8:
        cout << "It's August" << '\n';
        break;
    case 9:
        cout << "It's September" << '\n';
        break;
    case 10:
        cout << "It's October" << '\n';
        break;
    case 11:
        cout << "It's November" << '\n';
        break;
    case 12:
        cout << "It's December" << '\n';
        break;
    default:
        cout << "Please enter the number from 1 to 12";
        break;
    }

    return 0;

}
