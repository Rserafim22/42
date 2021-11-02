#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int	main()
{
	int fd;
	ft_putstr_fd("salut", fd);
}
