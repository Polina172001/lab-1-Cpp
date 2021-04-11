#include <iostream>
using namespace std;

double function(double x, double y)
{
	return ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
}

void main()
{
	int x = 4;
	int y = 16;
	double f;
	cout.precision(5);

	f = function(x,y);
	cout << "x = " << x << " y = " << y << "\nf = " << f;
	cout << "\nInput x = ";
	cin >> x;
	cout << "Input y = ";
	cin >> y;
	f = function(x, y);
	cout <<"\nf = " << f;
}
