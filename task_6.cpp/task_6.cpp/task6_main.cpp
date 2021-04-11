#include <iostream>
using namespace std;
extern double x, y, f;
void function();

void main()
{
	x = 4;
	y = 16;
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


