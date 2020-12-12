int GCM(int a, int b)
{
	int c = b;
	while (a % b != 0)//алгоритъм на Евклид
	{
		c = a % b;
		a = b;
		b = c;
	}
	return c;
}

int ArrayGCM(int* arr, int size)
{
	for (int i = 0; i < size; i++)//филтрираме масива
	{
		if (arr[i] < 2)
		{
			for (int j = i + 1; j < size; j++)
			{
				arr[j - 1] = arr[j];
			}
			size--;
			i--;
		}
	}

	if (size == 0)//частни случаи
	{
		return 0;
	}

	if (size == 1)
	{
		return arr[0];
	}

	int result = GCM(arr[0], arr[1]);//намираме НОК на първите два елемента, после на това число с всеки следващ елемент
	for (int i = 2; i < size; i++)
	{
		result = GCM(result, arr[i]);
	}
	return result;
}
