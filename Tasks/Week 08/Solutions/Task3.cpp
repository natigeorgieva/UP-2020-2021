//за 2 числа
double avg(int a, int b)
{
	double result = (double(a) +double(b)) / 2;   //първо кастваме а и b към double, за да не закръгли евентуално надолу, като разделим на 2
	return result;
}


//за числа от масив
double arrayAvg(int* arr, int size)
{
	double result = 0;
	for (int i = 0; i < size; i++)
	{
		result += double(arr[i]);
	}
	result /= size;
	return result;
}
