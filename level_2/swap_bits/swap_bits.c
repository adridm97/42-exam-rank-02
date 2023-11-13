#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}
int main()
{
    printf("swapping 36 ($) should return 66 (B)\n");
printf("--> %d (%c)\n", swap_bits(36), swap_bits(36));
}