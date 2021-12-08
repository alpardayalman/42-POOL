/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:57:27 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/07 21:49:39 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putstring(char	*str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	return ;
}

bool	ft_strcmp(char *s1, char *s2)
{
	int	i;

	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	i = (*(unsigned char *) s1 - *(unsigned char *) s2);
	if (i == 0)
		return (false);
	if (i < 0)
		return (false);
	return (true);
}

void	ft_swap(char **str1, char **str2)
{
	char	*swap;

	swap = *str1;
	*str1 = *str2;
	*str2 = swap;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	count = 1;
	i = 1;
	if (argc < 2)
		ft_putstring(argv[1]);
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[i]))
				ft_swap(&argv[j], &argv[i]);
			j++;
		}
		i++;
	}
	while (count < argc)
	{
		ft_putstring(argv[count]);
		write(1, "\n", 1);
		count++;
	}
}
