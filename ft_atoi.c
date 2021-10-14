#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	result;
	
	i = 0;
	signe = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i++] - '0';
	}
	result = result * signe;
	return (result);
}
/*
int	main()
{
	printf("%d\n", ft_atoi("       -+-++-asd42"));
}*/
