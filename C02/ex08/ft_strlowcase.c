/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:59:08 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/30 17:41:19 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if ((str[i] > 64 && str[i] < 91))
			{
				str[i] = str[i] + 32;
			}
			i++;
		}
	}
	return (str);
}
