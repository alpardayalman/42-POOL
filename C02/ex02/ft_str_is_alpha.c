/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:59:11 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/01 20:49:31 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (!(str[i] > 64 && str[i] < 91)
				&& !(str[i] > 96 && str[i] < 123))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
