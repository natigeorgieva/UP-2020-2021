#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;

	cout << "Enter coordinates of a point (x, y): ";
	cin >> x >> y;

	//В случая, когато търсим дали точка попада в кръг с център (a, b), ще използваме формулата,
	//която проверява какво е разстоянието от от точката (а, b) до въведената (x, y)
	double r = sqrt(pow(x - 2, 2) + pow(y - 3, 2));

	//Ако разстоянието между точките е по-малко или равно от радиуса то точката е в кръга
	if (r <= 5) {
		cout << "The point is on the disc";
	}
	else { //В противен случай не е
		cout << "The point is outside the disc";
	}
}
