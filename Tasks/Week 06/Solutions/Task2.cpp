
//Разделяме на 3 цикъла

for (int i = 0; i < N; i++)//Само главния диагонал
		cout << arr[i][i] << " ";

	for (int j = 0; j < N - 1; j++)// Започваме от нулевия до предпоследния стълб
		for (int i = j + 1; i < N; i++)//За всеки стълб изкарваме всички редове до долу, започвайки от реда под главния диагонал
			cout << arr[i][j] << " ";


	for (int j = N - 1; j > 0; j--)//Обратното на втория цикъл (от ляво надясно на стълбовете)
		for (int i = j - 1; i >= 0; i--)//От долу нагоре за редовете
			cout << arr[i][j] << " ";