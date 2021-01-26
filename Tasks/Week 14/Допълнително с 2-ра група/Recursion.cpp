//проверка за палиндром

bool isPalindrome(string a)
{
	int n = a.length();
	if (n <= 1)//ако дължината е 1 или 0, то стринга е палиндром
	{
		return true;
	}

	if (a[0] != a[n - 1])//гледаме първия и последния елемент дали са еднакви
	{
		return false;
	}

	string b;
	for (int i = 1; i < n - 1; i++)
	{
		b += a[i];
	}//създаваме b да е като а, но без първия и последния елемент

	return isPalindrome(b);//извикваме функцията за b
}


//цифров корен на число

int DigitSum(int n)//събира цифрите на едно число
{
	if (n < 10)//ако е едноцифрено, връщаме него
	{
		return n;
	}

	return n % 10 + DigitSum(n / 10);иначе връщаме последната цифра + функцията от числото, разделено на 10
}

int DigitalRoot(int n)
{
	if (n < 10)//ако е едноцифрено
	{
		return n;
	}
	
	return DigitalRoot(DigitSum(n));//викаме функцията с параметър сбора на цифрите
	
}

//нарастващи елементи на масив
bool progression(double arr[], int n, double nextPositive = -1)//като я извикваме или й задаваме ръчно стойност -1, или и задаваме неинициализиран double
{
	if (n == 0)//дъно
	{
		return true;
	}
	if (arr[n - 1] <= 0)//ако е отрицателен, скипваме
	{
		return progression(arr, n - 1, nextPositive);
	}
	if (nextPositive < 0)//първо nextPositive e -1, след което му даваме за стойност първото възможно положително число
	{
		nextPositive = arr[n - 1];
		return progression(arr, n - 1, nextPositive);
	}
	if (arr[n - 1] > nextPositive)//където условието не е изпълнено
	{
		return false;
	}
	nextPositive = arr[n - 1];
	progression(arr, n - 1, nextPositive);//викаме рекурсивно функцията
}
