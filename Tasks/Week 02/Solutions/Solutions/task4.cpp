#include <iostream>
using namespace std;

int main()
{
	double x, y;

	cout << "Enter coordinates of a point (x, y): ";
	cin >> x >> y;


	//За прави, които са успоредни на координатните оси, каквито са страните на този квадрат
	//нещата са лесни, защото те представляват константи по дадената ос
	if (x >= 0 && x <= 2 && y >= 0 && y <= 2) {
		cout << "The point is in the square!";
	}
	else {
		cout<< "The point isn't in the square!";
	}
}
