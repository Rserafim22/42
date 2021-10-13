/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:03:27 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/13 11:37:00 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
#endif
