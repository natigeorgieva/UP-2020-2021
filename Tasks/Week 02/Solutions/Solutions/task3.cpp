#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	//a*x^2 + b*x + c 
	//Заб: ^ не е оператор за степенуване в c++, само го използваме за кратък запис
	double a, b, c;

	//Полином от n-та степен ще рече, че коефициента пред x^n е различен от 0
	//следователно трябва да направим проверка дали a!=0
	cout << "Enter the coeficents of a second degree polynomial (a!=0)";
	cin >> a >> b >> c;

	if (a == 0) {
		cout << "Leading coeficent ca't be 0...";
		return 0; //Набързо прекратяваме програмата, защото иначе ще крашне програмата, ако делим на 0 в последствие
	}

	//Много добре познатата ви формула
	double D = pow(b, 2) - 4 * a * c;

	///С навързани if-else разглеждаме различните варианти за дискриминантата
	if (D == 0) {
		cout << "x_1 = x_2 = " << b / (2 * a) << endl;

	}
	else if (D > 0) {
		cout << "x_1 = " << (-b - sqrt(D)) / (2 * a)
			 << "\nx_2 = " << (-b + sqrt(D)) / (2 * a);
	}
	else {
		cout << "No real roots!\n";
	}
}
