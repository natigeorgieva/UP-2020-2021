//първо сума
  int sum; //тук ще записваме сумата от цифрите
	int count = 0; // броим колко числа изпълняват условието
	int temporary = 0;  //ще работим с него във фор цикъла, за да не променяме стойностите на i
	for (int i = 100; i < 1000; i++) //обхождаме трицифрените числа
	{
		sum = 0;
		temporary = i;
		do
		{
			sum += temporary % 10;
			temporary /= 10;
		} while (temporary != 0);

		if (i % sum == 0)
		{
			count++;
		}
	}
	cout << count;
