#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *pb;
	unsigned char	cc;

	if (b == NULL)
		return (NULL);
	pb = b;
	cc = (unsigned char) c;
	while (len--)
	{
		*pb = cc;
		pb++;
	}
	return (b);
}
/*
int	main()
{
	char *str;
	int	c = 'o';
	size_t	len = 2;
	str = ft_strdup("salut");
	

	printf("%s\n", str);
	ft_memset(str, c, len);
	printf("%s\n", str);
}*/
