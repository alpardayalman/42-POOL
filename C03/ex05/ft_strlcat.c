/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:17:50 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/05 00:11:04 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*src_start;
	unsigned int	remaining;
	unsigned int	dst_len;

	dst = dest;
	src_start = src;
	remaining = size;
	while (remaining-- != 0 && *dst != '\0')
		dst++;
	dst_len = dest - dst;
	remaining = size - dst_len;
	if (remaining == 0)
		return (dst_len + ft_get_len(src));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*dst++ = *src;
			remaining--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_len + (src - src_start));
}
