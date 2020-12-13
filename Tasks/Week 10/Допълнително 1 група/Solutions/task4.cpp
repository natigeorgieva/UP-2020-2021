#include <iostream>
#include <string>
using namespace std;
const int N = 10;//глобална константа; използваме я за заделяне на памет за масива


int main()
{
int arr[N][N];//създаваме двумерен масив 10 на 10
	int n;//числото, с което ще работим;
	cin >> n;
	int value = 1;
	for (int i = 0; i < n; i++)//с този фор цикъл даваме стойности на елементите от масива
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = value++;//на i-ти ред и j-ти стълб елемента става колкото value, след което заради ++ value се увеличава
		}
	}

	int copyJ;//копие на j, за да не го променяме
	for (int j = 0; j < n; j++)//за всяка колкона правим едно и също
	{
		copyJ = j;
		for (int i = n - 1; i >= 0 && copyJ >=0; i--)//от последния ред вървим нагоре
		{
			cout << arr[i][copyJ] << " ";
			copyJ--;//и наляво
		}
	}
	int copyI;//тук аналогично същото правим като в предния цикъл
	for (int i = n - 2; i >= 0; i--)
	{
		copyI = i;
		for (int j = n - 1; j >= 0 && copyI >=0; j--)
		{
			cout << arr[copyI][j] << " ";
			copyI--;
		}
	}
  return 0;
  }
