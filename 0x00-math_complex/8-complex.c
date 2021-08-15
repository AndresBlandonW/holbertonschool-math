#include "holberton.h"
#include <math.h>

/**
 * division - the division operation to complex nums
 * @m: modulus
 * @arg: argument
 * @c3: complex mod
 */

void complex_from_mod_arg (double m, double arg, complex *c3)
{
c3->re = m * cos(arg);
c3->im = m * sin(arg);
}
