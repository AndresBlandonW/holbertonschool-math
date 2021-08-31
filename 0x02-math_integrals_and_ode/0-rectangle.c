#include "rectangle.h"
#include <math.h>

/**
 * rectangle_method - Rectangle method
 * @a: data a
 * @b: data b
 * Return: the rectangle approx integral
 */
double rectangle_method(double a, double b, int steps )
{

    int i;
    double width, height, k, sum = 0.0;

    width = (b - a) / steps;
    k = a;

    for (i = 1; i <= steps; i++)
    {
        height = 1 / (1 + (k * k));
        sum += width * height;
        k += width;
    }

    return (sum);

}
