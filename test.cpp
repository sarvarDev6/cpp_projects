#include <iostream>

int main() {
	int age;
	std::string name;

	std::cout << "What's your name?: \n";
	std::getline(std::cin >> std::ws, name);
	std::cout << "How old are you?: \n";
	std::cin >> age;
	std::cout << "Hello," << name << '\n';
	std::cout << "You " << age << " years old \n";

	return 0;
}