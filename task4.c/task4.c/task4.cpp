#include <iostream>
using namespace std;

double x = 4;
double y = 16;
double f;
void function() {
	f = ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
}
void main()
{
	cout.precision(5);
	function();
	cout << "x = " << x << " y = " << y << "\nf = " << f;
	
	cout << "\nInput x = ";
	cin >> x;
	cout << "Input y = ";
	cin >> y;
	function();
	cout << "f = " << f;
}



