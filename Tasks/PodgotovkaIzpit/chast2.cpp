#include <iostream>
#include<string>
using namespace std;

int const N = 100;

int stringNumbers(string str, int begin, int end)
{
	if (begin > end)
		return 0;

	if (str[begin] <= '9' && str[begin] >= '0')
		return 1 + stringNumbers(str, ++begin, end);
	else return stringNumbers(str, ++begin, end);
}
/////////////////////////////////////////////////////////////////////////
bool stringSymbol(string str, char element, int begin, int end)
{
	if (begin > end)
		return false;
	if (str[begin] == element)
		return true;

	if (element >= 'a' && element <= 'z')
	{
		if (str[begin] == element)
			return true;
		else if( str[begin] == (element + 'A' - 'a'))
			return true;
	}
	if (element >= 'A' && element <= 'Z')
	{
		if (str[begin] == element)
			return true;
		else if (str[begin] == (element + 'a' - 'A'))
			return true;
	}
	return stringSymbol(str,element, ++begin, end);
}
//////////////////////////////////////////////////////////////////////////
bool CheckIfNice(int num)
{
	if (num == 0)
		return false;
	while (num%2==0)
	{
		num /= 2;
	}
	while (num % 7 == 0)
	{
		num /= 7;
	}
	if (num == 1)
		return true;
	else return false;
}
/////////////////////////////////////////////////////////////////////////////
void Input(int arr[][N], int rows, int columns )
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			cin >> arr[i][j];
}
/////////////////////////////////////////////////////////////////////////////
void Output(int arr[][N], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
///////////////////////////////////////////////////////////////////////////////
void compare(int arr[], int matrix[][N], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		int k = 0;
		for (int j = 0; j < columns; j++)
		{
			if (CheckIfNice(matrix[i][j]) && k==0)
				k = matrix[i][j];
			if (CheckIfNice(matrix[i][j]) && k != 0 && matrix[i][j] < k)
				k = matrix[i][j];
		}
		arr[i] = k;
	}
}
/////////////////////////////////////////////////////////////////////////////////
int main()
{
	/*
	string str;
	getline(cin,str);
	//cout << stringNumbers(str, 0, str.size() - 1);
	cout << stringSymbol(str, '9', 0, str.size() - 1);
	*/
	//cout << CheckIfNice(35);
	int arr[N][N];
	int n = 3;
	Input(arr, n, 4);
	Output(arr, n, 4);
	cout << endl;
	int arr2[N];
	compare(arr2, arr, n, 4);
	for (int i = 0; i < n; i++)
		cout << arr2[i] << " ";


	return 0;
}
