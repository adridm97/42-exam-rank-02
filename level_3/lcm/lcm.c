#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int res;
    if (a == 0 || b == 0)
    {
        return 0;
    }
    if(a > b)
    {
        res = a;
    }
    if(a < b)
    {
        res = b;
    }
    while(1)
    {
        if(res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
    return 0;
}
int main()
{
    unsigned int a = 3;
    unsigned int b = 7;
    unsigned int res;
    res = lcm(a, b);
    printf("lcm de a y b es: %d", res);
}