#include <math.h>
double result;
double x = 4;
double y = 16;

void function()
{
    result = ((x - 1) * sqrt(x)) - ((y - 1) * sqrt(y)) / ((sqrt((pow(x, 3)) * y)) + (x * y) + pow(x, 2) - x);
}