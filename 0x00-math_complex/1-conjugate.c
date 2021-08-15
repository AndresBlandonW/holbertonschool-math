#include "holberton.h"

/**
 * conjugate -  conjugate of a given complex number.
 * @c: data
 */

complex conjugate(complex c)
{
c.im *= -1;
return (c);
}
