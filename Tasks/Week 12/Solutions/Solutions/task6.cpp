#include <iostream>
using namespace std;

bool isOpeningBracket(char c) {
	if (c == '(' || c == '{' || c == '[') return true;

	return false;
}

bool isClosingBracket(char c) {
	if (c == ')' || c == '}' || c == ']') return true;

	return false;
}

bool areProperlyClosed(char ch1, char ch2) {
	if (ch1 == '(' && ch2 == ')') return true;

	if (ch1 == '{' && ch2 == '}') return true;

	if (ch1 == '[' && ch2 == ']') return true;

	return false;

}

/// <summary>
///		Рекурсивно намира първата скоба след даден символ в низа
/// </summary>
/// <param name="str">Символния низ</param>
/// <param name="pos">Телущата позиция на символа</param>
/// <returns>Ако текущата позиция е вид скоба връща нея, в провитен случай връща резултата на същата функция за следващия символ</returns>
int findNextBracket(string str, int pos) {
	if (pos >= str.length()) {
		return -1;
	}

	char ch = str[pos];

	if (pos<str.length()&&!(isOpeningBracket(ch) || isClosingBracket(ch))) {
		return findNextBracket(str, pos + 1);
	}

	return pos;
}
/// <summary>
///		Рекурсивното решение на задачата за проверка на скоби
/// </summary>
/// <param name="str">Символния низ със скоби, който проверяваме</param>
/// <param name="pos">Текущата позиция в низа</param>
/// <param name="startRec">Флаг, който уточнява дали това е първоначалното извикване на рекурсията или не</param>
/// <returns></returns>
bool bracketChecker(string str, int pos = 0, bool startRec = true) {
	//Ще преглеждаме скобите по двойки (текуща, следваща)
	pos = findNextBracket(str, pos);			  //Взимаме текущата скоба, тя ще е фиксирана за цялото изпълнение на итерацията на рекурсията и трябва да е отваряща
	if (pos == -1 && startRec) return true;		  //Ако няма намерена скоба и сме в първата итерация на рекурсията то няма скоби и всичко е точно 
	if (isClosingBracket(str[pos])) return false; //Ако стартовата скоба е затваряща автоматично нещата са грешни

	int tempPos = findNextBracket(str, pos + 1); //Взимаме следващата скоба
	if (tempPos == -1) return false;             //Ако не съществува то текущата отваряща скоба няма с какво да бъде затворена и съответно са грешни скобите

	//Тъй като в самия цикъл държим логиката кога да се прекрати, то няма нужда от условия
	while (1) {
		//Ако втората скоба е отваряща то ще извикаме рекурсивно същата функция, където текущата втора скоба ще стана първа
		if (isOpeningBracket(str[tempPos])) {
			//Ако рекурсията върне, че е имало грешка със скобите някъде навътре в низа връщаме false
			if (!bracketChecker(str, tempPos, false)) {
				return false;
			}
			else {
				//В противен случай трябва да преместим tempPos на следващата не проверена скоба

				//Тъй като в този случай имаме правилни затворени трябва да стигнем до затварящата скоба на текущата втора отваряща

				//Създаваме си брояч, който да брои колко незатворени скоби имаме. В случая нещата се свеждат до броене на отварящи  и
				//затварящи скоби, защото вече сме проверили в предишната рекурсия тяхната коректност.
				int countBr = 1;
				
				//Докато бройката на незатворените скоби е >0
				while (countBr) {
					tempPos++;										//Минаваме на следващия символ
					if (isOpeningBracket(str[tempPos])) countBr++;  //Ако той е отваряща скоба увеличаваме броя на незатворените скоби
					if (isClosingBracket(str[tempPos])) countBr--;  //Ако той е затваряща скоба намаляваме броя на незатворените скоби
				}

				tempPos = findNextBracket(str, tempPos + 1); //След като сме стигнали до последната проверена скоба търсим следващата за проверка
				if (tempPos == -1) return false; //Ако не бъде намерена такава, то за текущата незатворена първа скоба няма да има съответна затваряща втора и имаме грешка
			}
		}
		//В противен случай ако втората скоба е затваряща
		else {
			//Ако това е първото ниво на рекурсията 
			if (startRec) {
				//Правим проверка дали са затворени текущите две скоби и ако са
				if (areProperlyClosed(str[pos], str[tempPos])) {

					// Търсим дали има други скоби в низа
					pos = findNextBracket(str, tempPos + 1);
					if (pos == -1) return true;                          //Ако няма всичко е точно и прекратяваме цикъла
					if (!isOpeningBracket(str[pos])) return false; // Ако има, но не е отваряща то има грешка
					tempPos = findNextBracket(str, pos + 1);       //Търсим за втора скоба след текущата първа
					if (tempPos == -1) return false;			   // Ако не е намерена, то няма с какво да  се затвори сегашната първа и има грешка
				}
				//В противен случвай ако не са затворени правилно очевидно има грешка
				else {
					return false;
				}

			}
			//Ако това не е първото ниво на рекурсията то просто връщаме резултата от правилното затваряне на скобите на предишното извикване
			else {
				return areProperlyClosed(str[pos], str[tempPos]);
			}
		}
	}
}


int main() {
	cout << bracketChecker("alsd(jw023dfs{2e}) df()asd {34}");

}