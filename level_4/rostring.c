#include <unistd.h>

int main(int ac, char **av)
{
  int i = 0;
  int flag = 1;
  int start = 0;
  int end = 0;
  if (ac > 1 )
  {
    while((av[1][i] == 32 || av[1][i] == 9) && (av[1][i] != '\0'))
    {
      i++;
    }
    start = i;
    while((av[1][i] != 32 && av[1][i] != 9) && (av[1][i] != '\0'))
    {
      i++;
    }
    end = i;
    while(av[1][i])
    {
      while((av[1][i] == 32 || av[1][i] == 9) && (av[1][i] != '\0'))
      {
        if(flag == 1)
        {
          write(1, " ", 1);
          flag = 0;
        }
        i++;
      }
      flag = 1;
      write(1, &av[1][i], 1);
      i++;
    }
    write(1, " ", 1);
    i--;
    while(start < end)
    {
      write(1, &av[1][start], 1);
      start++;
    }
  }
  write(1, "\n", 1);
}
