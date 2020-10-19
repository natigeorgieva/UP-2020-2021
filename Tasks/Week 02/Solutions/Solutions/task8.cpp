#include <iostream>
using namespace std;

int main()
{
	int inpt;

	cout << "Enter a number: ";
	cin >> inpt;

	string day;

	switch (inpt%7)
	{
		case 0: day = "Sunday"; break;
		case 1: day = "Monday"; break;
		case 2: day = "Tuesday"; break;
		case 3: day = "Wednesday"; break;
		case 4: day = "Thirsday"; break;
		case 5: day = "Friday"; break;
		case 6: day = "Saturday"; break;
		default: day = "Something defenetly went wrong!";
	}

	cout << "The day is "<<day;
}
