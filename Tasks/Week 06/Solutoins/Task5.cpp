double row0 = 3;//въвеждаме си кои числа искаме по първия ред, първия стълб, диагонала и елемента на 1-ви ред и 1-ви стълб
double col0 = 1.0 /(M - 1);
double diag = 1;
double first = 4;


//даваме начални стойности на елементите на матрицата, след което запълваме каквото искаме с for цикли
for (int i = 0; i < M; i++)
{
	for (int j = 0; j < M; j++)
	{
		arr[i][j] = 0;
	}
}

arr[0][0] = first;

for (int i = 1; i < M; ++i)
{
	arr[0][i] = row0;
	arr[i][0] = col0;
	arr[i][i] = diag;

}
for (int i = 0; i < M; i++)
{
	for (int j = 0; j < M; j++)
	{
		cout << arr[i][j] << " ";
	}
	cout << endl;
}
double factor = 0;//с него ще умножаваме i-тия ред и ще изваждаме от първия
doublee product = 1.0; //по него ще умножаваме всеки елемент на главния диагонал и ще получим резултата
for (int i = 1; i < M; i++)
{
  factor = arr[0][i] / arr[i][i];
	arr[0][0] -= arr[i][0] * factor;//от първия елемент пък вадим елемента на ред i и 0-лев стълб, умножен по factor
  product *= arr[i][i];
}
//накрая остава да умножим product по първия елемент
product *= arr[0][0];
cout << product;
