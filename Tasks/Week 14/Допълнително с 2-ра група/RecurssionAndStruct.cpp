//Рекурсивна функция, която пресмята комбинации n над k като се използва факта, че комбинация (n/k) = (n-1/k-1) + (n-1/k) за 0<k<n
//*Току-що си измислих тези означения, да не вземе някой да ги ползва наистина*
//Пр: Combination(10,8)=45

int Combination(int n, int k)
{
	if (n < k)
		return -1;
    //Следващите два случая са дъното, те си следват от дефиницията за комбинация
	if (n == k)
		return 1;
	if (k == 1)
		return n;

	return Combination(n - 1, k - 1) + Combination(n - 1, k); //Имплементация на горната формула
}


//Фунцкия, която проверява дали отрицателните числа в масив образуват нестрого намаляваща редица
//Пр: -5 0 5 3 2 -7 -9 -> да

bool isOK(int arr[], int length, int lastneg)//в мейна за lastneg подаваме нула
{
	if (length == 1)
	{
  //Има три случая, когато сме стигнали в края на масива
		if (*arr >= 0)
			return true;
		else if (*arr <= lastneg)
			return true;
		else return false;
	}
	if (*arr >= 0)/Ако текущият елемент е >=, го пропускаме, тъй като не ни вълнува
		return isOK(++arr, --length, lastneg);
	else if (*arr <= lastneg)//Ако текущият елемент е по-малък или равен от последния отрицателен (lastneg), той става новия най-малък
	{
		lastneg = *arr;
		return isOK(++arr, --length, lastneg);
	}
	else return false;//Отана само случав, в който *arr е <0 и >lastneg -> връщаме false
}


//Структура студент, която съдържа име (string), масив от 3 реални числа (оценки) и IQ (цяло число)
//Да се направи функция, която премахва последния студент от масив от студенти, койо има IQ<80 и среден успех по-малък от 3


struct Student 
{
	string name;
	double grades[3];
	int IQ;
};


double average(double arr[])
{
	double sum = 0;
	for (int i = 0; i < 3; i++)
		sum += arr[i];

	return sum / 3;
}

void func(Student arr[], int& len)
{
	int index = -1;//Да остане -1, в случай, че няма такъв студент
	for (int i = 0; i < len; i++)
	{
		if (arr[i].IQ < 80 && average(arr[i].grades) < 3)
			index = i;
	}
	if (index == -1)
		return;

	for (int i = index; i < len-1; i++)
	{
		arr[i] = arr[i + 1];
	}
	len--;
}
