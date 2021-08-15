#include "holberton.h"
#include <math.h>

/**
 * division - the division operation to complex nums
 * @c1: complex num 1
 * @c2: complex num 2
 * @c3: complex num 3
 */

void division(complex c1, complex c2, complex *c3)
{

c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / (pow(c2.re, 2) + pow(c2.im, 2));
c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / (pow(c2.re, 2) + pow(c2.im, 2));

}
