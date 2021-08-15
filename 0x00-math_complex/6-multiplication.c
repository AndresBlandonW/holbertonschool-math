#include "holberton.h"

/**
 * multiplication - the multiplication operation to complex nums
 * @c1: complex num 1
 * @c2: complex num 2
 * @c3: complex num 3
 */

void multiplication(complex c1, complex c2, complex *c3)
{
c3->re = (c1.re * c2.re) - (c1.im * c2.im);
c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
