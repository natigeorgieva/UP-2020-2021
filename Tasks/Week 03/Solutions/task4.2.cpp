  int product;
	int count = 0;
	int temp = 0;
	for (int i = 100; i < 1000; i++)
	{
		product = 1;
		temp = i;
		do
		{
			product *= temp % 10;
			temp /= 10;
		} while (temp!=0);
		if (product == 0) //ако имаме нула в цифрите, то произведението ще стане 0 и ще даде проблем при намирането на остатък
		{
			continue; //continue прекъсва сегашната итерация и започва следващата
		}
		if (i % product == 0)
		{
			count++;
		}
	}
	cout << count;
