#include <iostream>
#include <string>

using namespace std;

bool isAlpha(char ch) {
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ? true : false);
}

bool isLower(char ch) {
	if (ch >= 'a' && ch <= 'z') return true;
	return false;
}

char toUpper(const string& str, int index) {
	if (str.length() && !(index >= 0 && index <= str.length())) {
		return 0;
	}

	if (isLower(str[index])) {
		return str[index] - 'a' + 'A';
	}

	return str[index];
}

//Лека модификация на предишната програма
string acr(const string& str) {
	bool isWord = false;
	string acr = "";

	if (str.length() && isAlpha(str[0])) {
		acr += toUpper(str, 0);
	}

	for (int i = 0; i < str.length() - 1; i++) {
		if (!isAlpha(str[i]) && isAlpha(str[i + 1])) {
			acr += toUpper(str, i+1);
		}
	}

	return acr;
}

int main() {
	string str = "graphics interchange format";

	cout << acr(str);

}