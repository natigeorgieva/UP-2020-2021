int a[20], b[20], n, m;
	cin >> n >> m;
	
  
  //запълваме масивите
	for (int i = 0; i < n; i++)//запълваме масивите до въведените числа
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}


	int c[40];//реално максимално с може да има 400 елемента, ако елементита и а, и b са 20 и са едно и също число(примерно само единици),но няма да издребняваме :Д
	int br = 0;//този брояч ще ни показва колко елемента има в с




//слагаме еднаквите числа в трети масив
	for (int i = 0; i < n; i++)//всеки елемент на а
	{
		for (int j = 0; j < m; j++)//обикаля всеки на b
		{
			if (a[i] == b[j])//и тук ги сравняваме
			{
				c[br] = a[i];//ако са равни, записваме съответното число в с
				br++;
			}
		}
	}



//филтрираме третия масив
	for (int i = 0; i < br; i++)
	{
		for (int j = i+1; j < br; j++)//гледаме следващите елементи дали са равни на i-тия
		{
			if (c[i] == c[j])
			{
				for (int k = j + 1; k<br ;k ++)//ако са, местив всеки след j-тия с едно място наляво и така стойността, която е била в него се губи
				{
					c[k - 1] = c[k];

				}
				br--;//вече последният елемент е на предпоследно място, така че не трябва да обхождаме масива до него
				j--;//в момента елементът на j-то място преди малко е бил на j+1 во, така че, ако не намалим j, ще го пропуснем
			}
		}
	}
//изкарваме елементите на филтрирания масив
	for (int i = 0; i < br; i++)
	{
		cout << c[i];
