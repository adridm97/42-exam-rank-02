#include "ft_list.h"
#include<stdio.h>

int ft_list_size(t_list *begin_list)
{
    int size = 0;
    while(begin_list != NULL)
    {
        size++;
        begin_list = begin_list->next;
    }
    return(size);
}
int main()
{
    t_list *list;
    list = NULL;
    int len = ft_list_size(list);
    printf("%d", len);
}