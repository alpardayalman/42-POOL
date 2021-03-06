/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 03:32:00 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/14 23:24:55 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	putnbr(int i)
{
	if (i > 9)
		putnbr(i /= 10);
	write(1, &"0123456789"[i % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		printstr(par[i].str);
		putnbr(par[i].size);
		printstr("");
		printstr(par[i].copy);
		i++;
	}
}
