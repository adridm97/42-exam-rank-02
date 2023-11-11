#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int i = 0;
	long int res = 0;
	int sign = 1;

	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
int main()
{
	int i;
	char str[] = "686657785241532";
	i = ft_atoi(str);
	printf("%d", i);
	printf("%d", atoi(str));
	return 0;
}
