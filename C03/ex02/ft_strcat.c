/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:58:24 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/04 21:05:21 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_size(char *str);

char	*ft_strcat(char	*dest,	char *src)
{
	unsigned int	i;
	unsigned int	sum;
	unsigned int	counter;

	counter = 0;
	i = ft_size(dest);
	sum = i + ft_size(src);
	while (i < sum)
	{
		dest[i] = src[counter];
		counter++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_size(char *str)
{
	unsigned int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
