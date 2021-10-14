/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:12:38 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/14 11:57:21 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>


size_t	ft_strlcpy(char *dest,const char *src, size_t size)

{
	unsigned int sizeee;
	unsigned int i;

	sizeee = strlen(src);
	i = 0;
	if (size != 0)
	{	
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (sizeee);
}

int main ()
{
	const char	src[] = "helllll";
	char		dest[] = "dsds";
	size_t		size = 80;
	printf("%lu\n", ft_strlcpy(dest, src, size));
	printf("%lu\n", strlcpy(dest, src, size));
}
