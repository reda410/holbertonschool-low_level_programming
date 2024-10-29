#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * @n: no of inputs
 */
void print_diagonal(int n)
{
int h;
for (h = 0; h < n; h++)
{
if (h > 0)
{
_putchar('_');
}
}
_putchar('\n');
}
