/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:39:12 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/06 02:08:29 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	basecheck(char *base, int *radix)
{
	int	basesize;
	int	same_char;

	basesize = 0;
	while (base[basesize] != '\0')
	{
		if (base[basesize] == '\t' || base[basesize] == '\n'
			|| base[basesize] == '\v' || base[basesize] == '\f'
			|| base[basesize] == ' ' || base[basesize] == '+'
			|| base[basesize] == '-' || base[basesize] == '\r')
			return (false);
		same_char = basesize + 1;
		while (base[same_char] != '\0')
			if (base[basesize] == base[same_char++])
				return (false);
		basesize++;
	}
	*radix = basesize;
	if (basesize == 1 || basesize == 0)
		return (false);
	return (true);
}

void	ft_recursif(int nbr, char *base, int radix)
{
	if (nbr == -2147483648)
	{
		ft_recursif(nbr / radix, base, radix);
		ft_putchar(base[-(nbr % radix)]);
		return ;
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_recursif(-nbr / radix, base, radix);
		return ;
	}
	if (nbr >= radix)
		ft_recursif(nbr / radix, base, radix);
	ft_putchar(base[nbr % radix]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (basecheck(base, &radix))
	{
		ft_recursif(nbr, base, radix);
	}
	return ;
}
