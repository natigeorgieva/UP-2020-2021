#include <iostream>
using namespace std;

int recFunc(int x) {
	if (x == 1) {
		return 5;
	}

	if (x == 2) {
		return 1;
	}

	return 2 * recFunc(x-2) + recFunc(x-1);
}

int main() {

	for (int i = 1; i < 10; i++) cout << recFunc(i) << endl;
}