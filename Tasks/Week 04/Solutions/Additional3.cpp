int arr1[N];
	int arr2[N];

	int arr3[2 * N];

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	int lenght = m + n;
	for (int i = 0; i < n; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		arr3[n + i] = arr2[i];
	}
	
//До тук сливахме двата масива в един

//Сега следва да се отървем от елементите, които се повтарят

	for (int i = 0; i < lenght; i++)
	{
		cout << arr3[i];
		for (int j = i+1; j < lenght; j++)//търсим друг елемент равен на arr3[i]
		{
			if (arr3[i] == arr3[j])//намираме го
			{
				for (int k = j; k < lenght - 1; k++)//премахваме този елемент, като всеки елемент го приравняваме на следващия
				{
					arr3[k] = arr3[k + 1];
				}
				lenght--;
				j--;//при случай на два съседни равни на arr3[i]
			}
		}
	}

	return 0;

