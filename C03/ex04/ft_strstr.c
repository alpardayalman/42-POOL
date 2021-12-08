/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:46:14 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/04 23:45:39 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*area;
	char	*find;

	if (*to_find == '\0')
		return (str);
	area = str;
	find = to_find;
	while (1)
	{
		if (*find == '\0')
			return ((char *)(area - (find - to_find)));
		if (*area == *find)
			find++;
		else
			find = to_find;
		if (*area == '\0')
			break ;
		area++;
	}
	return (0);
}
