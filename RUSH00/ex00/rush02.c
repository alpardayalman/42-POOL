/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Talha, Alp, Mehmet.                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:34:15 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/28 18:50:57 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printer(int x, int y, int i, int j);

int		if_negative(int x);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	x = if_negative(x);
	y = if_negative(y);
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_printer(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_printer(int x, int y, int i, int j)
{
	if (i == 1 && j == 1 || i == 1 && j == x)
	{
		ft_putchar('A');
	}
	else if (i == y && j == x || i == y && j == 1)
	{
		ft_putchar('C');
	}
	else if (i == 1 || i == y)
	{
		ft_putchar('B');
	}
	else if (j == 1 || j == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

int	if_negative(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
