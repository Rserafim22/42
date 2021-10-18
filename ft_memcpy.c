#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (n <= strlen(dst) + 1)
	{
		i = 0;
		while (i < n)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i++;
		}
	}
	return (dst);
}
/*

int	main()
{
	char	src[] = "okay";
	char	dest[] = "mani";
	size_t	n = 3;
	printf("%s\n", dest);
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
}*/
