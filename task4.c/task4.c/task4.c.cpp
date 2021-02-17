// task4.c.cpp 

#include <iostream>

using namespace std;

void f(void);
double x, y, res;

void main()
{
	cout.precision(5);
	cout << "Input x\n";
	cin >> x;
	cout << "Input y\n";
	cin >> y;
	f();
	cout << "f = " << res;
}

void f(void)
{
	res = ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
}


