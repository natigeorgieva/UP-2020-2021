bool coprimes(int a, int b)
{
	int m = 0;
	if (a < b)
	{
		m = a;
	}
	else { m = b; }
	for (int i = 2; i <= m; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			return false;
		}
	}
	return true;
}


int EuelerFunction(int number)
{
	int result = 1;
	for (int i = 2; i < number; i++)
	{
		if (coprimes(number, i))
		{
			result++;
		}
	}
	return result;
}
