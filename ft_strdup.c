#include "libft.h"

char	*ft_strdup(const char *str)
{
	int	i;
	int	len;
	char	*new_str;

	len = 0;
	while (str[len] != '\0')
		len++;
	new_str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main()
{
	printf("%s\n", ft_strdup("salutbroooooo"));
}*/
