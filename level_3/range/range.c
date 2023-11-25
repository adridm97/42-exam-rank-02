#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int size = 0;
    int *range;
    size = abs((end - start));
    range = (int *)malloc(sizeof(int) * size) + 1;
    while(start <= end)
    {
        range[i] = start++;
        i++;
    }
    while(start >= end)
    {
        range[i] = start--;
        i++;
    }
    return (range);
}
int main()
{
    int i = 0;
    int start = 0;
    int end = 0;
    int *res = ft_range(start, end);
    while(start <= end)
    {
        printf("\n first val: --> %d", *res);
        res++;
        start++;
    }
    free(*res);
}