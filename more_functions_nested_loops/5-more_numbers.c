#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 */

void more_numbers(void)
{
int n, m;
for (m = 0; m < 10; m++)
{
for (n = 0; n < 15; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
_putchar(n + '0');
}
_putchar('\n');
}
}
