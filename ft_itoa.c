//creer fonction boucle nb => str
#include "libft.h"
size_t	ft_nb_len(int n)
{
	size_t count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while ( n > 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}
char *ft_itoa(int n)
{
	char *str;
	size_t size;
	size_t i;
	int nb;

	if (n >= 2147483647 || n <= -214783648)
		return (NULL);
	nb = n;
	size = ft_nb_len(n);
	str = malloc((sizeof(char) * size) + 1);
	i = size;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	str[size + 1] = '\0';
	return (str);
}

int main()
{
	printf("%s\n", ft_itoa(473295));
}
