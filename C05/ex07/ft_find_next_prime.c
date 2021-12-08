/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:35:49 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/07 20:08:21 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool	ft_is_prime(int prime)
{
	int	i;

	i = 2;
	if (prime < 2)
		return (false);
	while (i < prime / 2)
	{
		if (prime % i == 0)
			return (false);
		i++;
	}
	return (true);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (!(ft_is_prime(nb)) && nb < 2147483647)
	{
		nb++;
	}
	return (nb);
}
