#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	char *str;
	int len = 0;
	
	while(src[i])
		i++;
	i = 0;
	str = (char *)malloc(sizeof(str) * (len + 1));
	if (!str)
		return (NULL);
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char str[] = "Hola";
	char *ret;
	ret = ft_strdup(str);
	printf("%s", ret);
	return 0;
}
