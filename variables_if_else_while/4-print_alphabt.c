#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
char c = 'a';
while (c <= 'z' || c <= 'Z')
{
putchar(c);
c++;
if (c > 'z')
{
c = 'A';
}
}
putchar('\n');  
return 0;      
}
