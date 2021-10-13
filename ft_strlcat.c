/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:08:18 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/13 11:36:06 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < strlen(dst))
		i++;
	return (i + size);
}
/*
int	main(void)
{
	char *dst = "WORLD";
	const char *src = "hello";
	size_t size = 0;

	printf("%lu\n", strlcat(dst, src,size));
	printf("%lu\n", ft_strlcat(dst, src,size));
}*/
