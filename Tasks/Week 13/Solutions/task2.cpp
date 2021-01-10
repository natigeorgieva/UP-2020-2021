#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int N = 20;

//Исканата от задачата структура с три полета
struct Disaster {
	int MasonConvertion;
	int HumanCostumes;
	int FMICurse;
};

//Функция, която по подаден обект по псевдоним я въвежда
void inputDisaster(Disaster& obj) {
	cin >> obj.MasonConvertion >> obj.HumanCostumes >> obj.FMICurse;
}

//Функция, която по подаден обект по константен псевдоним я извежда
void outputDisaster(const Disaster& obj) {
	cout<<"Pts Mason conversion : " <<obj.MasonConvertion 
		<< "\nPts Human costumes : "<<obj.HumanCostumes
		<<"\nPts FMI Curse : "<< obj.FMICurse<<endl;
}

//Функция, която по подаден масив, неговия размер и индекс в него, изтрива елемента от масива
void removeDisaster(Disaster arr[], int& size, int pos) {
	if (pos >= size) {
		return;
	}

	for (int i = pos; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}

	size--;
}


//Функцията, която филтрира елементите от масива с бедствия по условията от условието
void filterArr(Disaster arr[], int& size) {
	int maxSum = 0; //Тази променлива ще държи стойността на най-голямата сума от точки, за не премахнатите обекти

	//За всеки елемент от масива
	for (int i = 0; i < size; i++) {
		//Ако е изпълнено и трите стойности да са равни
		if (arr[i].FMICurse == arr[i].HumanCostumes && arr[i].HumanCostumes == arr[i].MasonConvertion) {
			removeDisaster(arr, size, i);	//Премахваме елемента
			i--;							//Намаляваме брояча с 1, защото при премахването на текущия елемент идва друг, който не е бил проверяван, а края на цикъла ще премине на следващия
			continue;						//Прекратяваме текущата итерация и започваме от начало
		}
		
		//Еквивалентна логика и за останалите правила за премахване
		if (arr[i].FMICurse + arr[i].HumanCostumes + arr[i].MasonConvertion > 50) {
			removeDisaster(arr, size, i);
			i--;
			continue;
		}

		if (arr[i].FMICurse > arr[i].HumanCostumes * arr[i].MasonConvertion) {
			removeDisaster(arr, size, i);
			i--;
			continue;
		}

		//Ако елемента не е бил отстранен проверяваме да ли неговата сума от точки е по-голяма от текущата и ако е я презаписваме
		if (arr[i].FMICurse + arr[i].HumanCostumes + arr[i].MasonConvertion > maxSum) {
			maxSum = arr[i].FMICurse + arr[i].HumanCostumes + arr[i].MasonConvertion;
		}
	}


	//Ако масива има повече от 6 елемента премахваме тези със сума от точките равна на най-голямата от всички
	if( size > 6){
		for (int i = 0; i < size; i++) {
		if (arr[i].FMICurse + arr[i].HumanCostumes + arr[i].MasonConvertion == maxSum) {
			removeDisaster(arr, size, i);
			i--;
		}
	}
	}
	

}


int main() {
	Disaster arr[N];

	int size;
	cin >> size;

	if (!(size > 5 && size <= N)) {
		return 0;
	}

	for (int i = 0; i < size; i++) {
		inputDisaster(arr[i]);
	}

	filterArr(arr, size);

	for (int i = 0; i < size; i++) {
		outputDisaster(arr[i]);
	}
}