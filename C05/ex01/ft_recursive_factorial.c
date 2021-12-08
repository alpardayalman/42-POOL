/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:36:30 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/07 01:58:55 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	reqursif(int faq, int nb)
{
	faq *= nb--;
	if (nb > 0)
		return (reqursif(faq, nb));
	return (faq);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (reqursif(1, nb));
}
