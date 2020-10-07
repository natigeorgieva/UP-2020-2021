// nachalo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()


//Тъй като последната беше за домашно, но аз ви я решх без да искам по време на час, ето ви още две като компенсация :)

//1. По въведено цяло двуцифрено число, изкарайте обратното число на конзолата. Пример: вход-25, изход-52

//2. Използвайте библиотеката <math.h> и закръглете стойностите на произволен синус и косинус до произволен знак след запетайката (без да ползвате функция за закръглянето).
//като произволният знак след запетайката не може да е кой да, все пак float и double си имат лимити.

{
   /* 
   //Намерете лицето на правоъгълник по дадени страни а и b:

    double width;
    double height;
    cout << "Enter width: " << endl;
    cin >> width;
    cout << "Enter height: " << endl;
    cin >> height;

    cout << height * width << endl;

	//или

    double area = height * width;
    cout << area;
    */

   
	//По дадени кординати на две точки в декартова система, намерете разстоянието между тях:

    double x1, y1;
    cout << "Enter x1 coordinates: ";
    cin >> x1;
    cout << "Enter y1 coordinates: ";
    cin >> y1;
    double x2, y2;
    cout << "Enter x2 coordinates: ";
    cin >> x2;
    cout << "Enter y2 coordinates: ";
    cin >> y2;

    double ydiff = abs(y2 - y1);
    double xdiff = abs(x2 - x1);

    double distance = sqrt(pow(ydiff, 2) + pow(xdiff, 2));
    cout << distance;

    
    return 0;

}

