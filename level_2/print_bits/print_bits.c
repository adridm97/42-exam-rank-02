#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void    print_bits(unsigned char octet)
{
    int i = 7;
    char bit;
    while( i >= 0)
    {
        bit =(octet >> i & 1) + '0';
        write(1, &bit, 1);
        i--;
    }
}
void	print_bits(unsigned char octet);

int	main()
{
	unsigned char byte = 170;
    print_bits('a');
	return (0);
}