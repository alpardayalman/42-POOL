/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:36:39 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/07 01:44:18 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	faq;

	faq = 1;
	i = 0;
	if (nb >= 0)
	{
		while (i < nb)
		{
			faq *= (i + 1);
			i++;
		}
		return (faq);
	}
	return (0);
}
