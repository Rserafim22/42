/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:12:38 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/11 17:30:37 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

/*
int	ft_strlcpy(const char *src, char *dest, size_t size)

{
	size_t	sizeee;
	int i;

	sizeee = 0;
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		i++;
		sizeee++;
	}
	i = 0;
	dest[i] = '\0';
	return (sizeee);
}
*/
int main ()
{
	char src[] = "hello world";
	char dest[] = "belle";
	size_t size = 6;
//	printf("%lu\n", ft_strlcpy(src, dest, size));
	printf("%lu", strlcpy(dest, src, size));
}
