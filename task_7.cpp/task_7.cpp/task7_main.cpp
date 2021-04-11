#include <iostream>
#include "func.h"

using namespace std;

void main()
{
	cout.precision(5);
	function();
	cout << "x = " << x << " y = " << y << "\nf = " << result;
	cout << "\nInput x = ";
	cin >> x;
	cout << "Input y = ";
	cin >> y;
	function();
	cout << "f = " << result;
}
