#include <iostream>
using namespace std;

int main()
{
	double x, y;

	cout << "Enter coordinates of a point (x, y): ";
	cin >> x >> y;

	//За прави, които са успоредни на координатните оси, каквито са страните на този квадрат
	//нещата са лесни, защото те представляват константи по дадената ос
	//В случая за x в интервала [0, 2]  долната и горната отсечка са респективно константите
	//0 и 2. Следователно ако x е в [0, 2] и y е в [0, 2] то точката е в квадрата
	if (x >= 0 && x <= 2 && y >= 0 && y <= 2) {
		cout << "The point is in the square!";
	}
	else {
		cout<< "The point isn't in the square!";
	}
}
