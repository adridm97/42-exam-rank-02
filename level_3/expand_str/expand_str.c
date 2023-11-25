#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int flag = 1;

    if (ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] == 32 || av[1][i] == 9)
            {
                if(flag == 0)
                {
                    flag = 1;
                }
            }
            if(av[1][i] != 32 && av[1][i] != 9)
            {
                if(flag == 1)
                {
                    write(1, "   ", 3);
                    flag = 0;
                }
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}