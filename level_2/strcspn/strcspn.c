#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	while (s[i])
	{
		while(reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
		j = 0;
	}
	return (i);
}

int main()
{
	const char s[] = "Hola nque tal";
	const char reject[] = "n";
	int i;
	i = ft_strcspn(s, reject);
	printf("%i", i);
	return 0;
}
