#include <stdio.h>

int main(void)
{
    printf("Taille de char: %zu octets\n", sizeof(char));
    printf("Taille de int: %zu octets\n", sizeof(int));
    printf("Taille de float: %zu octets\n", sizeof(float));
    printf("Taille de double: %zu octets\n", sizeof(double));
    printf("Taille de long: %zu octets\n", sizeof(long));
    printf("Taille de long long: %zu octets\n", sizeof(long long));

    return 0;
}
