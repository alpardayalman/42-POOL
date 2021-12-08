/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:41:39 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/01 20:43:40 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 32 && str[i] <= 126))
			{
				return (0);
				break ;
			}
			i++;
		}
	}
	return (1);
}
