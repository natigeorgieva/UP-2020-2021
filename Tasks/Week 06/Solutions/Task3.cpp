
//Идеята: Спираловидното обхождане става като разделим обхождането на квадратчета. Нека имаме матрица 5Х5. Първо обхождаме най-външното квадратче.
//Остава матрица 3Х3, след това отново обхождаме най-външното крадратче и остава матрица 1Х1 (един елемент) и сме готови.
// Само че не знаемколкло пъти ще го правим това външно обхождане по рамката на матрицата, затова забелязваме, че това зависи от чрността на размера
// на нашата матица. Ако е четно, ще правим външното обхождане N/2 пъти, ако е нечетно - N/2+1. вижте и се убедете, че е така.

int size;
	if (M % 2 == 0)
		size = M / 2;    
	else size = M / 2 + 1;
	
  //Принципът на външното обхождане е един и същ, без значение размерността, затова си рпавим две променливи count и razmer, които да ни помнят
   //каква е размерността на  оставащата матрица (съответно колко редове и колко стълба са останали). Може и с една променлива, но така, сякаш, е по-удобно.
  
  int count = 0;
	int razmer = M;
	for (int k = 0; k < size; k++)
	{
  //Забележете в циклите как не ползваме 0 и N, а count и razmer, тъй като при всяка итерация на външния цикъл се изменят
  
		if (count == razmer - 1)//Ако ни е останала матрица 1Х1, просто изкарваме елемента и излизаме от цикъла, няма смисъл да минаваме пак през него,
    //като нищо няма да се случи
		{
			cout << arr[count][count];
			break;
		}
		for (int j = count; j <razmer-1 ; j++)//Обхождамехоризонтално най-горния ред, без псоледния елемент
		{
			cout << arr[count][j] << " ";
		}

		for (int i = count; i < razmer-1; i++)//После обхождаме вертикално от горе надолу най-дясния стълб, без последния елемент		{
			cout << arr[i][razmer-1] << " ";
		}
		for (int j = razmer - 1; j > count; j--)//Обхождаме хоризонтално най-долния ред, от ляво надясно, без последния елемент
		{
			cout << arr[razmer-1][j] << " ";
		}
		for (int i = razmer - 1; i > count; i--)//Накрая обхождаме най-левия стълб от долу нагоре, без последния елемент
		{
			cout << arr[i][count] << " ";
		}
    //Това "без последния елемент" е с идеята, че, ако ни е остаала матрица 2Х2,всеки цикъл ще отпечата по един елемент, а така е много симетрично, нали :)
    
		count++; razmer--;//Марицата ни намалява, съотвтно увеличваме реда, от който ще започваме и намаляваме стълба, до който ще стигаме
	}