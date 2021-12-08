/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@42kocaeli.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:04:00 by ayalman           #+#    #+#             */
/*   Updated: 2021/11/29 18:52:28 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	tempo;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size - 1)
		{
			tempo = tab[i];
			if (tab[i] > tab[i + 1])
			{
				tempo = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tempo;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
