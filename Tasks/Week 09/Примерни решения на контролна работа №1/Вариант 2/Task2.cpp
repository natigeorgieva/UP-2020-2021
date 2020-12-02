int num;
	cin >> num;
	int copy = num;

	while (copy != 0)
	{
		if (copy % 3 == 0 || copy==1)
			copy /= 3;
		else  break;
	}
	if (copy == 0)
		cout << "Yes" << endl;
	else
	{
		int k = 0;
		int memory = num;
		while (num > 0)
		{
			num = memory;
			num -= pow(2, k);
			k++;
		}
		k--;
		if (num == 0 || -num < num + pow(2, k - 1))//Ако отрицателното е по-малко по абсолютна стойност, ще отпечатаме "неговата" степен
			cout << k << endl;
		else if (-num == num + pow(2, k - 1))
			cout << k - 1 << ", " << k << endl;
		else cout << k - 1 << endl;//В случай, че положителното число е по-голямо по абсолютна стойност от отрицателното
	}
