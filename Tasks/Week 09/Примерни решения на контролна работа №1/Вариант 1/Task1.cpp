bool halfCircle(double x, double y) //функция, която гледа условието за полукръга
{
	if (x >= 0 && x*x + (y - 1)*(y-1) <= 1)
		return 1;
	return 0;
}
bool triangle(double x, double y)// функция, която гледа условието за триъгълника
{
	if ((y <= 2 * x + 2) && (y >= x + 1) && x<=0)
		return 1;
	return 0;
}

int main()
{
  double x, y;
	cin >> x >> y;
	cout << (halfCircle(x, y) || triangle(x, y));//искаме или да е в полукръга, или в триъгълника
  //изкарваме 0(лъжа) или 1(истина)
  return 0;
)
