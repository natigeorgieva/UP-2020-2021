int num;
	cin >> num;
	int count = 0;
	int arr[N];
	for (int i = 0; num!=0; i++)
	{
		arr[i] = num % 10;
		num /= 10;
		count++;
	}
  
	bool flag = true;
  
	for (int i = 0; i + 1 < count; i += 2)
	{
		if (arr[i] <= arr[i + 1])
		{
			flag = false;
			cout << "No";
			break;
		}
	}
	if (flag)
		cout << "Yes";
