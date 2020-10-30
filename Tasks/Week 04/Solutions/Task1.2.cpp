int array[N];
	for (int i = 0; i < N; i++)
		cin >> array[i];

	for (int i = N-1; i >= 0; i--) //Не забравяйте, че последният елемент е N-1-вият, а не N-тият
		cout << array[i] << " ";
