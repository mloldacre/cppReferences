#include <iostream>
using namespace std;

int main() {
	string name;
	string favoriteFood;

	//Ask for name:
	cout << "What is your name?:" << endl;
	cin >> name;

	//Ask for favorite food:
	cout << "Hello, " << name << ", what is your favorite food?:\n";
	cin >> favoriteFood;

	cout << name <<" your favorite food is: " << favoriteFood << endl;
	return 0;
}