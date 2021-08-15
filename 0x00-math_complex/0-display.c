#include "holberton.h"

/**
 * display_complex_number - display complex number
 * @c: data
 */

void display_complex_number(complex c)
{

if (c.im == 0)
printf("%.9g\n", c.re);
else
printf("%.9g + %.9gi\n", c.re, c.im);

}
