#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Enter you're name: ";
    getline(cin, name);

    // name.append("@gmail.com");

    cout << name.at(0);

    // cout << "Your username has changed to: " << name;

    // if (name.length() > 12)
    // {
    //     cout << "Your name can't be over 12 characters";
    // }
    // else
    // {
    //     cout << "Welcome " << name;
    // }

    return 0;
}