/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:39:34 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/20 13:57:47 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack[j] == '\0')
		return (NULL);
	if (needle[i] == '\0' || needle == NULL)
		return ((char *)haystack);
	while (needle[i] != '\0' && len > j && ft_strlen(haystack))
	{
		i = 0;
		while (needle[i] == haystack[j + i] && i + j < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *haystack = " tu ooookay";
	const char *needle = "ooook";
	size_t len = 6;


	printf("%s\n", strnstr(haystack, needle, len));
	printf("%s\n", ft_strnstr(haystack, needle, len));
}*/
