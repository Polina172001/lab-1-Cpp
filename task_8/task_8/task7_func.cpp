#include <iostream>
#include "func.h"
using namespace std;

void f(void);
double x, y, res;

void f(void)
{
    res = ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
}