/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@42kocaeli.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:51:13 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/25 20:20:28 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	p;
	char	i;

	p = 'P';
	i = 'N';
	if (n >= 0)
	{
		ft_putchar(p);
	}
	else
	{
		ft_putchar(i);
	}
}
