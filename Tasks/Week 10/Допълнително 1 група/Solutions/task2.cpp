bool isPrime(int a)//функция дали едно число е просто
{
	for (int i = 2; i * i <= a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int LCM(int a, int b)//може и просто да разделим произведението на а и б на НОД а им
{
	int c;
	int result = 1;
	if (a < b)
	{
		c = b;
	}
	else
	{
		c = a;
	}
	for (int i = 2; i <= c; i++)
	{
		if (isPrime(i))
		{
			while (a % i == 0 || b % i == 0)
			{
				result *= i;
				if (a % i == 0)
				{
					a /= i;
				}
				if (b % i == 0)
				{
					b /= i;
				}
			}
		}

	}
	return result;
}

int ArrayLCM(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 3)
		{
			for (int j = i + 1; j < size; j++)
			{
				arr[j - 1] = arr[j];
			}
			size--;
			i--;
		}
	}

	if (size == 0)
	{
		return 0;
	}

	if (size == 1)
	{
		return arr[0];
	}

	int result = LCM(arr[0], arr[1]);
	for (int i = 2; i < size; i++)
	{
		result = LCM(result, arr[i]);
	}
	return result;
}
