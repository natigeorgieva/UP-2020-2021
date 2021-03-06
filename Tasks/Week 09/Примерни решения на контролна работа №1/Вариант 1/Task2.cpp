bool isPowerOfTwo(int n)
{
	while (n % 2 == 0)
	{
		n /= 2;
	}
	if(n == 1)
	{
		return true;
	}
	//n -= 1; ако n е 1, ще стане 0
	//return !n; ако е нула, връща истина, иначе за всяко друго число връща лъжа
}


int biggerNumber(int n)
{
	int prevError = n;
	int currentError = n-1;
	int counter = 0;
	while (prevError >= currentError)//когато предната разлика е по-малка от сегашната, то сме подминали това число
	{
		counter++;
		prevError = currentError;
		currentError = abs(n - pow(3, counter));
	}
	return (counter - 1);
}

int main()
{
  int n;
	cin >> n;
	if (isPowerOfTwo(n))
	{
		cout << "Yes";
	}
	else
	{
		int res = biggerNumber(n);
		if (abs(n - pow(3, res)) == n - pow(3, res - 1))//проверка дали не са 2 числата
		{
			cout << res << " " << res - 1;
		}
   }
 return 0;
 }
