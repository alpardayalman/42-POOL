/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:57:10 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/01 22:55:31 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
			}
			i++;
		}
	}
	return (str);
}
