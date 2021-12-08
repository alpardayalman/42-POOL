/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:07:25 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/01 01:01:37 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str);

char	*ft_nateboss(char	*str);

char	ft_maximize_tha_swag(char c);

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

char	*ft_strcapitalize(char	*str)
{
	str = ft_strlowcase(str);
	str = ft_nateboss(str);
	return (str);
}

char	*ft_nateboss(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] <= 122 && str[0] >= 97)
		{
			str[0] = ft_maximize_tha_swag(str[0]);
			i++;
			continue ;
		}
		if (str[i + 1] <= 122 && str[i + 1] >= 97)
		{
			if (!(str[i] <= 122 && str[i] >= 97)
				&& !(str[i] >= 65 && str[i] <= 90)
				&& !(str[i] <= 57 && str[i] >= 48))
			{
				str[i + 1] = ft_maximize_tha_swag(str[i + 1]);
				i += 2;
				continue ;
			}
		}
		i++;
	}
	return (str);
}

char	ft_maximize_tha_swag(char c)
{
	return (c - 32);
}
