//Погледнете 6 задача, логиката тук е почти същата
/*
while(n!=0)
{
cout<<n%2;
n/=2;
}
*/
//Ако направите това, ще получите числото n в двоична бройна система, но ще е записано наобратно. Идеята на задачата е да се измисли начин да се обърне
//Затова ви написах да видите 6 задача, тъй като там го ползваме това

int n;
	int sys;
	int result = 0;
	cin >> n;
	cin >> sys;
	int rest;
	int p=0;
	while(n!=0)
	{
	    rest = n % sys;
		result += pow(10,p)*rest;
		//Тук, за разлика  от 6 задача, записваме числото в прав ред, тоест първо са единиците, после десетици, стотици и т.н.
	
		n /= sys;
		p++;
		//С всяка стъпка увеличаваме степента за да добавяме сътветнaтa следваща цифра от числото n.
	}
	cout << result;