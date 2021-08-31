#include "simpson.h"
#include <math.h>
#define f(x) (1 / (1 + x * x))

/**
 * simpson - Calculate integral with simpson m
 * @a: lower limit
 * @b: upper limit
 * @steps: the steps size
 * Return: integral
 */

double simpson(double a, double b, int steps)
{

int i;
double k, integral = 0.0, subInterval;

subInterval = (b - a) / steps;

for (i = 1; i <= steps - 1; i++)
{
k = a + i * subInterval;
if (i % 2 == 0)
{
integral = integral + 2 * f(k);
}
else
{
integral = integral + 4 * f(k);
}
}

integral += 1 * f(a) + f(b);
integral = integral * subInterval / 3;
return (integral);
}
