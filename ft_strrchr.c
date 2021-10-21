/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:43:45 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/20 13:58:51 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*zebi;

	zebi = (char *)s;
	i = ft_strlen(zebi);
	while (i >= 0)
	{
		if (zebi[i] == c)
			return (&zebi[i]);
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	const char *s = "hello whoiedfgsoivdld";
	int	c;
	printf("%s\n", strrchr(s,c));
	printf("%s\n", strrchr(s,c));
}*/
