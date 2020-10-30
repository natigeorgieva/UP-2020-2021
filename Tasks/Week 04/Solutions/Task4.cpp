int arr[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	if (arr[N - 1] % 2 != 0) //Ако не се дели на 2, няма смисъл да се изпълнява останалата част от кода
		cout << "Not divisible by 6" << endl;
	else {
		int sum = 0;

		for (int i = 0; i < N; i++)
		{
			int current = arr[i];
			while (current != 0)// Този цикъл има за цел просто да разбие числото arr[i] на цифри и да ги прибави към общата сума
			{
				sum += current % 10;//Добавяме към сумата последната цифра на числото arr[i]
				current /= 10;//След това я премахваме и така въртим докато не стане 0 числото ни
			}
		}
		if (sum % 3 == 0)
			cout << "Divisible by 6" << endl;//Тъй като вече сме в случая, при който се дели на 2
		else cout << "Not divisible by 6" << endl;
	}
