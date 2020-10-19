#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;

	cout << "Enter coordinates of a point (x, y): ";
	cin >> x >> y;

	double r = sqrt(pow(x - 2, 2) + pow(y - 3, 2));

	if (r <= 5) {
		cout << "The point is on the disc";
	}
	else {
		cout << "The point is outside the disc";
	}
}
