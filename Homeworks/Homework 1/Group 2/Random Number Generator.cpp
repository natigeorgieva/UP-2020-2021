// И както винаги, ако имате въпроси, питайте по всяко време!!

#include<iostream>
#include <stdio.h>      //Добавете тези библиотеки
#include <stdlib.h>     
#include <time.h>  
using namespace std;

int main()
{	
	srand(time(NULL)); // Това го сложете в началото на мейна

	int random = rand() % 5 + 1; //Фунцията rand() ни дава някакво случайно. След това взимаме остатък при деление с 6 (което ни дава опциите от 0 до 5)
  //и прибавяме 1 (за да станат от 1 до 6)
  
	cout << random; //Това е само, за да се убедите, че всичко е точно

	//В цикъл би изглеждало така:
	for(int i=0; i<5; i++)
	{
		int randomNumber=rand()%5+1;
		cout<<randomNumber;
	}
	//Ще ви изкара 6 случайни числа межу 1 и 6
	
	return 0;
}

// http://www.cplusplus.com/reference/cstdlib/rand/ - Ако се интересувате по-подробно. 
