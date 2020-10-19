#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;

	//Когато заградим в кръгли скоби израза на тернарния оператор казваме на компилатора да върне стойността 
	//на израза, който той е изпълнил в зависимост от стойността на условието
	//Забележете, че стойността  за true е в израза, който се изпълнява за false, защото ако a се дели на b 
	//то модула ще върне 0, което се отъждествява с false и от там ще се изпълни false израза
	bool isDivisible = (a % b ? false : true); 

	if (isDivisible) {
		cout << "Yes, " << b << " divides " << a << endl;
	}
	else {
		cout << "No, " << b << " doesn't divide " << a << endl;
	}
}
