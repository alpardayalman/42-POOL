/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:48:16 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/13 22:21:26 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define INT_BIT 4

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*me;

	if (min >= max)
	{
		me = NULL;
		return (me);
	}
	i = 0;
	range = max - min;
	me = (int *) malloc (range * INT_BIT);
	if (!me)
		return (0);
	while (min < max)
	{
		me[i] = min ;
		min++;
		i++;
	}
	return (me);
}
//int main()
//{
//    int *array;
//    int loop = 0;
//    array = ft_range(-50, 100);
//    while (loop <= 200)
//    {
//           printf("%d ", array[loop]);
//            loop++;
//    }
//    
//}
