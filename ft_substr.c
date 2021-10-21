#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	size;
	size_t	i;

	i = 0;
	size = strlen(s) - start;
	if (len != size)
		return (NULL);
	str = malloc((sizeof(char) * len) + 1);
	while (s[start])
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	printf("%s\n", ft_substr("salut", 2, 3));
}
