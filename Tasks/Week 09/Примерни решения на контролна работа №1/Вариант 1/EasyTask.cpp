int reverseANumber(int number)
{
	int result = 0;
	while (number != 0)
	{
		result *= 10;
		result += number % 10;
		number /= 10;
	}
	return result;
}

void reverseAnArray(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = reverseANumber(arr[i]);
	}
}

void copyAnArray(int* from, int* to, int size)
{
	for (int i = 0; i < size; i++)
	{
		to[i] = from[i];
	}
}

bool isPalindrom(int* arr, int size)
{
	int compare[N]; 
	copyArray(arr, compare, size);
	reverseAnArray(compare, size);

	int i = size - 1;
	int j = size - 1;
	while (i >= 0 && j >= 0)
	{
		while (arr[i] != 0 && compare[j] != 0)
		{
			if (arr[i] % 10 != compare[j] % 10)
			{
				return false;
			}
			arr[i] /= 10;
			compare[j] /= 10;
		}
		if (arr[i] == 0)
		{
			i--;
		}
		if (compare[j] == 0)
		{
			j--;
		}
		
	}
	return true;
}
