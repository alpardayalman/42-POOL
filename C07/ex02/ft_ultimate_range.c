/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:15:26 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/13 18:20:32 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define INT_BIT 4

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	*range = (int *) malloc (len * INT_BIT);
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min ;
		min++;
		i++;
	}
	return (len);
}
//
//int main()
//{
//    int	min;
//	int	max;
//	int	*tab;
//	int	size;
//	int	i = 0;
//
//	min = -5;
//	max = 10;
//	size = ft_ultimate_range(&tab, min, max);
//	while(i < size)
//	{
//		printf("%d, ", tab[i]);
//		i++;
//	}    
//}
