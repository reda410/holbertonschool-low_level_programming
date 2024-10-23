#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'q';
while (c <= 'e')
{
putchar(c);
c++;
}
return (0);
}
