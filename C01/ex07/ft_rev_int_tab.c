/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@42kocaeli.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:02:09 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/29 03:14:27 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tempo;
	int	i;

	i = 0;
	while (i < size / 2)
	{
	tempo = tab[i];
	tab[i] = tab[size - i - 1];
	tab[size - i - 1] = tempo;
	i++;
	}
}
