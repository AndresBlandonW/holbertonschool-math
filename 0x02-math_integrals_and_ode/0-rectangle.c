#include "rectangle.h"
#include <math.h>

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
