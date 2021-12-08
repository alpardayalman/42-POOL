/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:19:21 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/30 17:39:07 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (!(str[i] > 96 && str[i] < 123))
			{
				return (0);
				break ;
			}
			i++;
		}
	}
	return (1);
}
