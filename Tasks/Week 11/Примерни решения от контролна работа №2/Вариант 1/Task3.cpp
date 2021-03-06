/*
Напишете функция, която по подаден символен низ да капитализира буквите,
които се намират между квадратни скоби. Самите скоби да бъдат изтрити.
Пример: "Make this [word] upper case. This [one] too."
-> "Make this WORD upper case. This ONE too."
*/

//Броят на отварящите скоби е равен на броя на затварящите. Също така няма вложени чифтове скоби едни в други

void ShiftAndUp(string& str, int pos, int& len)
{
	for (int i = pos; str[i] != ']'; i++)//Условието не е проблем, тъй като със сигурност имаме някъде затваряща скоба 
 // (в противен случай ще излезем извън паметта на стринга)
  
	{//Капитализираме буквите, докато не стигнем  затваряща скоба
		if (isalpha(str[i]) && islower(str[i]))
				str[i] = toupper(str[i]);
	}

	for (int i = pos; i < len-1; i++)//Приварняваме i-тия елемент на i+1-вия, от мястото, от което сме влезли в тази функция
		str[i] = str[i+1];
	len--;//намялваме позицията, до която ще обхождаме стринга във фунцкията bracets. 
  //Обърнете внимание, че тук сме подали дължината като псевдоним, така че всичко е наред
}

 void bracets(string& str)
{
	 int length = str.size();
	 int count = 0;
	 for (int i = 0; i < length; i++)
	 {
		 if (str[i] == '[' || str[i] == ']')
		 {//Ако попаднем на някоя скоба, искаме да я махнем (в случай, че е отваряща, ще капитализираме и буквите)
			 ShiftAndUp(str, i, length);
			 i--;//Като при предната задача, връщаме итератора, за да не пропускаме символи от низа
		 }
	 }
   //Правим си нов стринг, който ще е без скобите и с главните букви и накрая ще го приравним на стринга, който подаваме на функцията ни
   //Тъй като сме го подали като псевдоним и оригиналният ни ще се промени
	 string New = "";
	 for (int i = 0; i < length; i++)
		 New += str[i];
	 
	 str = New;
}

int main()
{
string str;
	 getline(cin, str);
	 bracets(str);
	 cout << str;
}
