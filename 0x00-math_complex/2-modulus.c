#include "holberton.h"
#include <math.h>

/**
 * modulus - modulus of given compx num
 * @c: data
 */

double modulus(complex c)
{

double result;

result = sqrt(pow(c.re, 2) + pow(c.im, 2));

return (result);

}
