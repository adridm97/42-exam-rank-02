#include <stdio.h>
#include <unistd.h>
void putnbr(int n)
{
    char res;
    if(n > 9)
    {
        putnbr(n / 10);
    }
    res = n % 10 + '0';
    write(1, &res, 1);
}

int main(int ac, char **av)
{
    if(ac == 1)
    {
        write(1, "0", 1);
    }
    putnbr(ac - 1);
    write(1, "\n", 1);
}