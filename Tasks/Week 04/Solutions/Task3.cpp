int array[N];
	for (int i = 0; i < N; i++)
		cin >> array[i];

	for (int i = 0; i < N; i++)
	{
		bool dali = true;
    
		for (int j = 2; j < array[i]/2 && dali==true ; j++) 
		{
    //Проверяваме дали числото се дели до половината си, може и с корен от числото, просто трябва допълнителната библиотека
    //(А може и да проверите всички числа от 2 до arr[i], просто ще е по-бавна програмата). Съответно, ако има такъв делител, променяме 
    //булевата променлива на false и така условието на цикъла не е изпълнено, и го прекъсваме.
			
      if (array[i] % j == 0)
				dali = false;
		}
		if (dali == true && array[i]!=0  && array[i]!=1)// Отделяме двата тривиални случаи и булевата променлива е индикаторът ни дали числото ни е просто
			cout << array[i] << " ";
	}
