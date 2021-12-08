/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@42kocaeli.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:08:08 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/25 22:13:26 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	combinator(char a, char b, char c, char d)
{
	char	e;
	char	f;

	e = ' ';
	f = ',';
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(e);
	ft_putchar(c);
	ft_putchar(d);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		return ;
	}
	ft_putchar(f);
	ft_putchar(e);
}

void	roller(char a, char b, char c, char d)
{
	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				d = b + 1;
				while (d <= 57)
				{
					combinator(a, b, c, d);
					d++;
				}
				++c;
			}
			++b;
		}
		++a;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	roller(a, b, c, d);
}
