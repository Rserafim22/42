#include "libft.h"

int	main()
{
	char	*s = "salut";
	printf("%s\n", s);
	printf("%s\n", memchr(s, 'l', 3));
}
