#include <stdio.h>
int ft_atoi_base(const char *str, int base)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'F')
        {
            res = res * base + str[i] - '7';
        }
        else if (str[i] >= 'a' && str[i] <= 'f')
        {
            res = res * base + str[i] - 'W';
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            res = res * base + str[i] - '0';
        }
        i++;
    }
    return (res * sign);
}
int main()
{
    const char str[] = "1a";
    int res;
    res = ft_atoi_base(str, 16);
    printf("result: --> %d", res);
}