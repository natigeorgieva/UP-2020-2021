/*
Напишете функция, която по подаден символен низ при срещане на цифра тя да се изтрива, а следващите k 
(или колкото остават до края на низа)букви да се преобразуват в главни. 
Пример: "abc1def2ghi9jklm" -> "abcDefGHiJKLM"
/*
void numbersAndLetters(string& str)
{
	int l = str.length();
	int iterator;
	int copy;
	for (int i = 0; i < l; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			iterator = str[i] - 48;//48 е ASCII кодът на '0' и така превръщаме дадената цифра в str[i] от тип char в тип int
			str.erase(i,1);//махаме числото
			l--;//трябва да намалим и дължината на стринга
			copy = i;
			for (; copy <i+ iterator && copy < l; copy++)
			{
				if (!isalpha(str[copy]))//ако е символ, не правим нищо с него, но не искаме да губим една итерация и затова се увеличава итераторът
				{
					iterator++;
				}
				else
				{
					str[copy] = toupper(str[copy]);
				}
			}
			i = copy - 1;
		}
	}
}
