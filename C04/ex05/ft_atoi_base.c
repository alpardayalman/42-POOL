/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:49:11 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/06 02:03:03 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int	minusinator(int minus, int number)
{
	if (minus % 2 == 1)
	{
		return (-number);
	}
	return (number);
}

bool	is_operator(char c)
{
	return (c == '-');
}

bool	is_numeric(char c)
{
	return (c <= '9' && c >= '0');
}

int	ft_atoi(char *str)
{
	int	minus;
	int	index;
	int	number;

	number = 0;
	index = 0;
	minus = 0;
	while (str[index] != '0')
	{
		if (str[index] == '-')
			minus++;
		if (is_numeric(str[index]))
		{
			while (is_numeric(str[index]) == 1)
			{
				number *= 10;
				number = number + (str[index] - 48);
				index++;
			}
			return (minusinator(minus, number));
		}
		index++;
	}
	return (minusinator(minus, number));
}

int ft_atoi_base(char *str, char *base)
{

}
