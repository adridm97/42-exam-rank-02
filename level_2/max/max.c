#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int i = 0;
    int max = tab[i];
    if(!tab)
    {
        return 0;
    }
    while (i <= len)
    {
        if(max < tab[i])
        {
            max = tab[i];
        }
        i++;
    }
    return (max);
}
int main()
{
    int tab[] = {10,119,8,11,700};
    int i;
    i = max(tab, 4);
    printf("max: %d", i);
    return 0;
}