#include "holberton.h"

/**
 * display_complex_number - display complex number
 * @c: data
 */

void display_complex_number(complex c)
{

if (c.re == 0)
{

if (c.im == 0)
printf("0\n");
else
printf("%.9g\n", c.im);

}
else
{

if (c.im == 0)
printf("%.9g\n", c.re);

if (c.im == 1)
printf("%.9g + i\n", c.re);

if (c.im == -1)
printf("%.9g - i\n", c.re);

if (c.im > 1)
printf("%.9g + %.9gi\n", c.re, c.im);

if (c.im < -1)
printf("%.9g - %.9gi\n", c.re, c.im * (-1));

}

}
