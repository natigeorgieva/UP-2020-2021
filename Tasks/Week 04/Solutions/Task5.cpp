int arr[N];
		for (int i = 0; i < N; i++)
			cin >> arr[i];

		bool flag = true;

		for (int i = 0; i < N-i-1 && flag==true; i++)
    {
    // Все едно обхождаме масива едновременно от двата края и сравняваме първи с последен, втори с предпоследен елемент и т.н.
    //докато не се получи застъпване на сравняваните елементи (тоест сравняваме елемент със себе си) или повторна проверка
    //(ако сме сравнили втория с n-2-тия, няма смисъл да сравняваме n-2-рия с втория)
    
			if (arr[i] != arr[N-1-i])//Ако някои са различни, флагът става false и повече не влизаме в тялото на цикъла
				flag = false;
		}

		if (flag == true)//Това ни е индикаторът дали числото е палиндром
			cout << "The number is a palindrome" << endl;
		else cout << "The number is not a palindrome" << endl;
