#include <stdio.h>
unsigned char reverse_bits(unsigned char octet)
{
    return(((octet & 0xF0) >> 4) | ((octet & 0xF0) << 4));
}
