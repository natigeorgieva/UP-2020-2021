int n;
	int sum = 0;
	int lastDigit = 0;
	cin >> n;
	while (n != 0)
	{
		lastDigit = n % 10;
		//Разглеждаме последната цифра
		
		if (lastDigit % 2 == 1)
		{
			sum += lastDigit;
		}
		n /= 10;
		//Премахваме последната цифра и така докато се изчерпат
	}
	cout << sum;
