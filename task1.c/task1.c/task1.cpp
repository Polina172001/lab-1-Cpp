#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    int y = 16;
    double f;
    cout.precision(5);

    f = ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
    cout << "x = " << x << " y = " << y << "\nf = " << f;

    cout << "\nInput x = ";
    cin >> x;
    cout << "Input y = ";
    cin >> y;
        
    f = ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
    cout << " f = " << f << "\n";
}


