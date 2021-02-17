#include <iostream>
using namespace std;

double f(double x, double y)
{
	double res;
	res = ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
	cout.precision(5);
	return res;
}