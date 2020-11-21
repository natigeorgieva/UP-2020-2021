//M-колони
//N-редове
int row[N];//Запазваме реда на едниците в матрицата
	int col[M];//Запазваме колоните на единиците в матрциата
  
  //По-добре е размера на двата едномерни масива да са с еднаква дължина (по-малкото от N и M), тъй като, ако броят на единиците е >=M(или N),
  //то цялата матрица ще стане в единици.
  
	int counter = 0;//Броят на единиците в матрицата
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (arr[i][j] == 1)
			{
				row[counter] = i;
				col[counter] = j;
				counter++;
			}
      
      //По-добре е също да имаме проверка дали броят не е > от редовете или колоните, за да си спестим цялото обхождане 
     /* 
      if(counter>М || counter >N)
      for(int i=0; i<N; i++)
        for(int j=0; j<M;j++)
          arr[i][j]=1;
else {долната част от кода}
*/

	for (int i = 0; i < counter; i++)
	{//Не пречи и да не си създаваме отделни променливи за реда и колоната, но така не трябва да ги достъпваме при всяка стъпка на цикъла
		int k = row[i];
		int h = col[i];

		for (int l = 0; l < M; l++)//Правим реда на единицта в единици
		{
			arr[k][l] = 1;
		}

		for (int p = 0; p < N; p++)//Правим колоната на единицата в единици
			arr[p][h]=1;
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
