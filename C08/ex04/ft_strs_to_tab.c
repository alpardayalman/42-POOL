/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:35:38 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/14 17:44:13 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = (char *) malloc(i + 1);
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*alan;

	i = 0;
	alan = malloc((ac + 1) * sizeof (struct s_stock_str));
	if (!alan)
		return (NULL);
	while (i < ac)
	{
		alan[i].size = ft_strlen(av[i]);
		alan[i].str = av[i];
		alan[i].copy = ft_strdup(av[i]);
		i++;
	}
	alan[i] = (struct s_stock_str){0, 0, 0};
	return (alan);
}
