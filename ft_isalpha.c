#include <stdio.h>

int	ft_isalpha(int c)
{

	if ((c >= 'A' && c <= 'z') && (c >= 'a' || c <= 'Z'))
{
		return(1);
}
		return (0);
}
/*
int	main()
{
	int c;
	c = '?';
		printf("%d\n", ft_isalpha(c));
}*/
