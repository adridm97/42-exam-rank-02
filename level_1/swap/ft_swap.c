#include <unistd.h>

void  ft_swap(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main()
{
  int a = 1;
  int b = 2;
  ft_swap(&a, &b);
  char n[10] = "0123456789";
  write(1, &n[a % 10], 1);
  write(1, &n[b % 10], 1);
  return 0;
}
