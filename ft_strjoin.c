#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t		index;
	size_t		new_size;

	index = 0;
	new_size = strlen((char *)s1) + strlen((char *)s2) + 1;
	new_str = malloc((sizeof(char) * new_size));
	while (*s1)
	{
		new_str[index] = *s1++;
		index++;
	}
	while (*s2)
	{
		new_str[index] = *s2++;
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

int	main()
{
	printf("%s\n", ft_strjoin( "sa","lut"));
}
