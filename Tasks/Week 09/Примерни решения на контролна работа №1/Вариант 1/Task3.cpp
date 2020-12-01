bool f(int number)
{
	while (number >= 100)
	{
		if ((number / 100) % 10 != (number / 10) % 10 + number % 10)
		{
			return 0;
		}
		number /= 10;
	}
	return 1;
}
