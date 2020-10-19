#include <iostream>
using namespace std;

int main()
{
	int inpt;

	cout << "Enter a number: ";
	cin >> inpt;

	if ((inpt % 2 == 0 && inpt % 3 == 0) || (inpt % 5 == 0 && inpt % 7 == 0)) {
		cout << "The number is divisible by 2 and 3 or 5 and 7!\n";
	}
	else {
		cout << "The number isn't divisible by 2 and 3 or 5 and 7!\n";
	}
}
