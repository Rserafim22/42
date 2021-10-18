#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	ft_memset(s, 0, ft_strlen(s));
}
/*
int main()
{
	char	*s;
	size_t	n = 0;

	s = ft_strdup("saluuuuuut");
	printf("%s\n", s);
	ft_bzero(s, n);
	printf("%s\n", s);
}*/
