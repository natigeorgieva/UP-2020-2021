#include <iostream>
#include <string>
using namespace std;
const int N = 10;


int main()
{
int arr[N][N];
	int n;
	cin >> n;
	int value = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = value++;
		}
	}

	int copyJ;
	for (int j = 0; j < n; j++)
	{
		copyJ = j;
		for (int i = n - 1; i >= 0 && copyJ >=0; i--)
		{
			cout << arr[i][copyJ] << " ";
			copyJ--;
		}
	}
	int copyI;
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
