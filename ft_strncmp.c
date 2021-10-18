/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:21:00 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/13 10:05:05 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	const char *s1 = "ll";
	const char *s2 = "oh";
	size_t n = 20;

	printf("%d\n", strncmp(s1,s2,n));
	printf("%d\n", ft_strncmp(s1,s2,n));
}*/
