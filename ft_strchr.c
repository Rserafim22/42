/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:14:26 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/14 13:41:41 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
//	if (c == '\0')
//		return (ft_strlen(s) - 1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;	
	}
	return (NULL);
}
int	main()
{
	const char *s = "salut";
	int	c = 't';
	printf("%s\n", strchr(s,c));
	printf("%s\n", ft_strchr(s,c));
}
