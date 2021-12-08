/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:49:53 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/01 20:45:02 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	turnhex(unsigned char a);

void	ft_putchar(unsigned char a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (!(*(str) >= 32 && *(str) <= 126))
		{
			turnhex(*(str));
		}
		else
		{
			ft_putchar(*(str));
		}
		str++;
	}
}

void	turnhex(unsigned char a)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[a / 16]);
	ft_putchar(hex[a % 16]);
}
