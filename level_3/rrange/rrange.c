#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int size = 0;
    int *range;
    size = abs((end - start));
    range = (int *)malloc(sizeof(int) * size) + 1;
    while(end >= start)
    {
        range[i] = end;
        end--;
        i++;
    }
    return (range);
}
int main()
{
    int i = 0;
    int start = -7;
    int end = 7;
    int *res = ft_range(start, end);
    while(start <= end)
    {
        printf("\n first val: --> %d", *res);
        res++;
        start++;
    }
}