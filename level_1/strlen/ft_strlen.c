#include <unistd.h>

void putnbr(int n)
{
  char number[10] = "0123456789";
  if(n > 9)
    putnbr(n / 10);
  write(1, &number[n % 10], 1);
}

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}
int main()
{
  char str[10] = "Hola sser";
  int len = ft_strlen(str);
  putnbr(len);
  return (0);
}
