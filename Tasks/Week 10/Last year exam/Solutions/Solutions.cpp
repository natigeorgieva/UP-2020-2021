#include <iostream>
#include <string>
#include <cctype>
using namespace std;


/* -------------------- Задача 2 --------------------*/

//Фунцкия за връщане на по-големия от два целочислени елемента
int maxnum(int a, int b) {
    return (a > b ? a : b);
}

//Фунцкия за връщане на по-маликя от два целочислени елемента
int minnum(int a, int b) {
    return (a > b ? b : a);
}

//Следните задачи са решени по каруцарския начин

//Най-малък общо кратно
int NOК(int a, int b) {
    int c = maxnum(a, b);

    
    while (!(c % a == 0 && c % b ==0)) {
        c++;
    }

    return c;
}

//Най-голям общ делител
int NOD(int a, int b) {
    if (a <= 0 || b <= 0) {
        cout << "Not def";
        return -1;
    }

    int c = minnum(a, b);

    while (!(a % c == 0 && b % c == 0)) {
        c--;
    }

    return c;
}

//Фунцкия, която по подаден масив, неговия размер и индекс, премахва 
//елемента на тази позиция, ако индекса е валиден (в интервала [0, size-1])
void removeElem(int arr[], int& size, int index) {
    if (!(index >= 0 && index < size)) {
        cout << "Index out of range";
        return;
    }

    for (int i = index + 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }

    size--;
}

//Желаната от задача 2 фунцкияя
int NODarr(int arr[], int& size) {

	//Премахваме всеки елемент, който не го искаме
    for (int i = 0; i < size; i++) {
        if (arr[i] < 2) {
            removeElem(arr, size, i);
        }
    }

	// Ако са ни останали по-малко от два елемента в масива и
    if (size < 2) {
		//Ако елемента е само един то връщаме него като НОД
        if (size == 1) {
            return arr[0];
        }
		//В противен случай някаква стойност, която да се използва като резултат ако няма елементи в масива
        else {
            return -1;
        }
    }

    //Ако има поне 2 елемета слагаме НОД да ние първия елемен
    int nod = NOD(arr[0], arr[1]);

    //и после взимаме НОД-а на текущиия НОД със следващото число от масива
    for (int i = 2; i < size; i++) {
        nod = NOD(nod, arr[i]);
    }

    return nod;
}

/* -------------------- КРАЙ Задача 2 --------------------*/



/* -------------------- Задача 3 --------------------*/
string Acr(string str) {
    string acr = "";

    if (isalpha(str[0])) {
        acr = acr + (char)toupper(str[0]);
    }

    for (int i = 0; i < str.length() - 1; i++) {
        if (!isalpha(str[i]) && isalpha(str[i + 1])) {
            acr += (char)toupper(str[i + 1]);
        }
    }

    return acr;
}

/* -------------------- КРАЙ Задача 3 --------------------*/


/* -------------------- Сортиращи алгоритми --------------------*/
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int pos = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[pos] > arr[j]) {
                pos = j;
            }
        }

        if (i != pos) {
            int temp = arr[pos];
            arr[pos] = arr[i];
            arr[i] = temp;
        }
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/* -------------------- КРАЙ Сортиращи алгоритми --------------------*/

int main()
{

    //cout << Acr("graphics interchange format");

    
    int arr[] = { -7, 15, -2, 5, 10, 1 };
    int size = 6;

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

}
