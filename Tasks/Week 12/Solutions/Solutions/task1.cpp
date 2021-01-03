#include <iostream>
using namespace std;

/**
	Рекурсивното сумиране на числата от 1 до n
	го разглеждаме, като сума нa текущото n с
	сумата на числата от n-1 до 1, за всяко n.

	При n=1 стигаме до дъното и връщаме 1ца
*/
int recsum(int n) {
	if (n == 1) {
		return 1;
	}

	return n + recsum(n - 1);
}

int main() {
	cout << recsum(5);
}