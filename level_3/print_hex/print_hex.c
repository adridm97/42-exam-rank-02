#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while(str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}
void putnbr(int n)
{
    char digit[16] = "0123456789abcdef";
        if(n >= 16)
        {
            putnbr(n / 16);
        }
        write(1, &digit[n % 16], 1);
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = ft_atoi(av[1]);
        putnbr(n);
    }
    write(1, "\n", 1);
}