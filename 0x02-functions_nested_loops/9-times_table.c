#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/

void main(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
if (b == 0)
{
_putchar(c + '0');
}

if (c < 10 && b != 0)
{
 _putchar(',');
_putchar(' ');
_putchar(c + '0');
}

else if (c >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
