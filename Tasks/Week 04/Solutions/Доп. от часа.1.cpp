/*
Да се намерят максималния и минималния елемент от масив и да се
отпечатат на екрана
Вход: 1 -4 5 6 10
Изход: -4 10
*/

double arr[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
    
	//Създаваме си променливите мин и макс и ги задаваме, да са първият елемент от масива, затова и започваме цикъла отдолу от 1-ва позиция
	double min = arr[0];
	double max = arr[0];

	for (int i = 1; i < N; i++)
	{
  //Присвояваме просто нови стойности на мин и макс, ако се открият елементи, съответно по-малки или по-големи от тях
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}
	cout << "Min of array: " << min << endl << "Max of array: " << max;
