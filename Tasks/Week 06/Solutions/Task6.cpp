//int const N - стълбове на първата и редове на втората матрица
//int const firstM - редове на първата матрица
//int const secondM - стълбове на втората матрица

int FIRST[firstM][N];
	int SECOND[N][secondM];

	for (int i = 0; i < firstM; i++)
		for (int j = 0; j < N; j++)
			cin >> FIRST[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < secondM; j++)
			cin>>SECOND[i][j];
	
	int result[firstM][secondM] = {};//Така запълваме автоматично цялата матрица с 0

	for(int i=0; i<firstM; i++)
		for (int j = 0; j < secondM; j++)
		{
			for (int k=0; k<N; k++)
			{
				result[i][j] += FIRST[i][k] * SECOND[k][j];//Обхождаме всеки елемнт result[i][j] и добавяме към него произведението на текущия елемент от реда
        //на първата матрица и стълба на втората матрица, и k ни е броячът (мени се до N, тъй като броят на стълбовете на първата и редовете на втората са равни.)
			}
		}


	for (int i = 0; i < firstM; i++)/Изкараме резултатната
	{
		for (int j = 0; j < secondM; j++)
			cout << result[i][j] << " ";
		cout << endl;
	}
