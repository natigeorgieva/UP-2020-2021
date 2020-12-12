#include <iostream>
#include <string>

using namespace std;

bool isAlpha(char ch) {
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'||ch==' ' ? true : false);
}


/*
* Функция, която по подаден низ, начален индекс и дължина, връща подниза от започващ от
* този индекс с такава дължина
*/
string substr(string str, int startIndex, int len) {
	//Ако началния индекс не попада в коректния интервал или дължината на подниза излиза извън нашия низ прекратяваме функцията
	if (!(startIndex >= 0 && startIndex < str.length())||startIndex+len>=str.length()) return "";

	string s = "";

	for (int i = 0; i < len; i++) {
		s += str[startIndex + i];
	}

	return s;
}

/*
* Желателната от задачата функция
*/
string longestWord(string str) {
	if (!str.length()) return "";

	// Променливи, които ще помнят къде текущия най-дълъг подниз започва и свършва
	int currMaxStart = -1, currMaxEnd = -1; 

	int currStart = -1; //Променлива, която ще държи индекса на текущия обработван подниз в цикъла

	//Ако първия символ не буква то нас ни интересува този подниз (както в 3та и 4та задача)
	if (!isAlpha(str[0])) {
		currStart = 0;
	}

	for (int i = 0; i < str.length(); i++) {
		//Ако намерим край на желан подниз т.е. преминаваме от не-буква към буква
		if (!isAlpha(str[i]) && isAlpha(str[i + 1])) {
			//Ако дължината на текущия най-голям подниз е по-малка от дължината на текущия низ
			//значи си имаме нов по-голям подниз
			if (currMaxEnd - currMaxStart < i - currStart) {
				currMaxStart = currStart; //Запазваме къде почва
				currMaxEnd = i;           //Запазваме къде свършва
			}
		}

		//Ако намерим началото на подниз записваме от къде почва
		if (isAlpha(str[i]) && !isAlpha(str[i + 1])) {
			currStart = i+1;
		}
	}
	
	//Накрая връщаме подниза, който сме намерили, че е най-голям
	return substr(str, currMaxStart, currMaxEnd - currMaxStart + 1);

}


int main() {

	cout << longestWord("8&*8[' ]\[768dfzf cvf7,.65*&Ads -0-['qew;e[769sdfs adf768; ;]'///[");
}
