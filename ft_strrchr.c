/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:43:45 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/14 13:59:27 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	while (s[i] >= 0)
	{
		if (s[i] == c)
			return ((char *) s);
		i--;
	}
	return (NULL);
}

int	main()
{
	const char *s = "hello whoiedfgsoivdld";
	int	c;
	printf("%s\n", strrchr(s,c));
	printf("%s\n", strrchr(s,c));
}
