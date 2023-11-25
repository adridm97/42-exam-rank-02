#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
    if(a <= 0 || b <= 0)
    {
        return 0;
    }
    int i = 1;
    int res = 1;
    while(i <= a && i <= b)
    {
        if(a % i == 0 && b % i == 0)
        {
            res = i;
        }
        i++;
    }
    return res;
}
int main(int ac, char **av)
{
int a = atoi(av[1]);
int b = atoi(av[2]);
int res = pgcd(a, b);
printf("resultado: %d", res);
}