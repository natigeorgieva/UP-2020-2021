//има 7 в записа си и се дели на 3

int a,b;
cin >> a >> b;
	bool flag;//ще го ползваме за първата част от проверката
	int copy;//с това ще правим тази проверка
	for (int i = a; i < b; i++)
	{
		flag = 0;
		copy = i;

		while (copy != 0)
		{
			if (copy % 10 == 7)//проверяваме последната цифра
			{
				flag = 1;
				break;
			}
			copy /= 10;//махаме последната цифра
		}

		if (flag == 1 && i % 3 == 0)
		{
			cout << i << " ";
		}
