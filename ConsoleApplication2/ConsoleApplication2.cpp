// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Single line comment
/* Multi-line comment */

// Input/Output Library
#include <iostream>
// Time Library
#include <ctime>
// Random Number Library
#include <cstdlib>
// Math Library (ceil, floor) 
#include <cmath>

using namespace std;

void favFood(string name);
int randomNumberGenerator();

int main()
{
    string name;
    cout << "Please enter your name:\n";

    cin >> name;
    //C-out using nmame space
    cout << "Hello, " << name << ", thanks for getting back into Cpp" <<endl;
    
    //C-out v2
    //std::cout << "Hello, " << name << ", thanks for getting back into Cpp" <<"\n";

	favFood(name);
    return 0;
}

void favFood(string name) {
	string favoriteFood;

	//Ask for favorite food:
	cout << "Hey, " << name << ", what is your favorite food?:\n";
	cin >> favoriteFood;

	cout << name << " your favorite food is: " << favoriteFood << endl;
	return;
}

int randomNumberGenerator(){

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
