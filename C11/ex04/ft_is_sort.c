/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 00:47:40 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/16 02:00:31 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	returned;

	i = 0;
	returned = 1;

	while (i < length - 1 && returned)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			returned = 0;
		i++;
	}
	if (returned != 1)
	{
		returned = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
