/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:38:20 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/01 00:52:32 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (!(str[i] > 64 && str[i] < 91))
			{
				return (0);
				break ;
			}
			i++;
		}
	}
	return (1);
}
