#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 */

void more_numbers(void)
{
char n;
int m;
for (m = 0; n <= 9; m++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
