double x, y;
	cin >> x >> y;

	bool triangle;
	if (y > -1 && y < x-1 && y < 1-x) 
		triangle = true;
	else triangle=false;

	bool circle; 
	if (pow(x - 1, 2) + pow(y + 1, 2) <= 1)
		circle = true;
	 else circle=false;

	 if (circle && !triangle)
		cout << "Inside the shape" << endl;
	else cout << "Outside the shape" << endl;
