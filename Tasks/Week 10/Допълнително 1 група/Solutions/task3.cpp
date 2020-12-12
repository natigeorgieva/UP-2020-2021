bool isLetter(char c)//може просто да използваме isalpha във функцията
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return true;
	}
	return false;
}

int LongestWord(string str)
{
	int len = str.length();
	int result = 0;
	int temp;
	for (int i = 0; i < len; i++)
	{
		temp = 0;
		while (isLetter(str[i]) && i < len)
		{
			temp++;
			i++;
		}
		if (temp > result)
		{
			result = temp;
		}
	}
	return result;
}
