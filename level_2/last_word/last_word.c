#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if(ac == 2)
    {
        while (av[1][j])
        {
            j++;
        }
        j--;
        while(av[1][j] == ' ' || av[1][j] == '\t')
        {
            j--;
        }
        i = j;
        while(i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
        {
            i--;
        }
        while (i <= j)
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}