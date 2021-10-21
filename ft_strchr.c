/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:14:26 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/20 14:02:47 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s) != '\0' && (*s) != c)
	{
		s++;
	}
	if ((*s) == c)
		return ((char *)s);
	return (NULL);
}
/*
int	main()
{
	const char *s = "salut";
	int	c = 't';
	printf("%s\n", strchr(s,c));
	printf("%s\n", ft_strchr(s,c));
}*/
