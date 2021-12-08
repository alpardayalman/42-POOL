/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:47:49 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/25 21:40:39 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printer(char a, char b, char c)
{
	char	i;
	char	j;

	i = ' ';
	j = ',';
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a == 55 && c == 57)
	{
		return ;
	}
	ft_putchar(j);
	ft_putchar(i);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			c = b + 1;
			while (c < 58)
			{
				ft_printer(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
