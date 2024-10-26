#include <stdio.h>

int main(void)
{
int count;
unsigned long fib1 = 1, fib2 = 2;
for (count = 1; count <= 50; count++)
{
if (count == 50)
printf("%lu\n", fib1);
else
printf("%lu, ", fib1);
unsigned long next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;
}
return 0;
}
