#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;

	bool isDivisible = (a % b ? false : true);

	if (isDivisible) {
		cout << "Yes, " << b << " divides " << a << endl;
	}
	else {
		cout << "No, " << b << " doesn't divide " << a << endl;
	}

}
