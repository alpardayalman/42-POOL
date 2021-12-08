/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:36:15 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/07 01:46:00 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	b;

	b = nb;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb *= ft_recursive_power(nb, (power - 1));
	return (nb);
}
