#include "holberton.h"
#include <math.h>

/**
 * argument - the argm of a given complex number
 * @c: data
 */

double argument(complex c)
{

return (atan(c.im / c.re));

}
