// task5.с.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double f(double x, double y);

void main()
{
	double x;
	double y;
	std::cout << "\nInput x\n";
	cin >> x;
	std::cout << "\nInput y\n";
	cin >> y;
	double res = f(x, y);
	cout << res;
}
