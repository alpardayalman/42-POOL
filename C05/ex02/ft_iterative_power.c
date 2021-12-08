/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:36:22 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/07 01:45:47 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	b;

	b = nb;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{	
		nb *= b;
		i++;
	}
	return (nb);
}
