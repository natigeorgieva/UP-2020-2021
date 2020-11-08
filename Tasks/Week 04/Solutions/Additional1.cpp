//А подточка
int number;
	cin >> number;
	int a = number % 10;
	int b = (number / 10) % 10;
	int c = number/10/10;

	bool flag = false;

	if (a > b)
	{
		if (c!=a)
			flag = true;
	}
	else if (c > b || b!=a)
		flag = true;

	cout << flag;



//Б подточка
double x, y, fx;
	cin >> x >> y;
	fx = -x;

	bool triangle=true;
	if (y <= 1 && y >= fx && x <= 0)//проверяваме дали точката не е в белия триъгълник и го запаметяваме в булевата променлива
		triangle = false;

	if (triangle && (x*x + y*y) <= 4 && y >= 0)
		// Проверяваме дали е в полукръга и, ако е в белия триъгълник, цялото става false, в противен случай първото е true и проверяваме останалите
    cout << "Inside";
	else cout << "Outside";
