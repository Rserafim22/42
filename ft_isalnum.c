#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);

	return (0);
}

int	main()
{
	printf("%d\n", ft_isalnum('1'));
}
