#include "functions_test.h"

void    display_binary(unsigned char octet)
{
    for (int i = 7; i >= 0; i--)
        printf("%d", (octet >> i) & 1);
    printf("\n");
}