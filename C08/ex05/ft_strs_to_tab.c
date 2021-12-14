/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:35:38 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/14 03:30:42 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *src)
{
	int i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
char	*ft_strdup(char *src)
{
	int	i;

	i = ft_strlen(src);
    char *dest;
    dest = (char *) malloc(i + 1);
    if (!dest)
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int		i;
	struct	s_stock_str	*alan;
	struct	s_stock_str	*d;

	i = 0;
	d = (alan = malloc((ac + 1) * sizeof(struct s_stock_str)));
	if (!d)
		return (NULL);
    while (i < ac)
	{
		alan[i].size = ft_strlen(av[i]);
		alan[i].str = av[i];
		alan[i].copy = ft_strdup(av[i]);
		i++;
	}
	alan[i] = (struct s_stock_str) {0, 0, 0};
	return (alan);
}
//int					main(void)
//{
//	int					index;
//	int					ac;
//	char				**av;
//	struct s_stock_str	*structs;
//
//	ac = 10;
//	av = (char **)malloc((ac + 1) * sizeof(char *));
//	index = 0;
//	while (index < ac)
//	{
//		av[index] = (char *)malloc((2 + 1) * sizeof(char));
//		av[index][0] = 'x';
//		av[index][1] = (char)(index + 'a');
//		av[index][2] = '\0';
//		index++;
//	}
//	structs = ft_strs_to_tab(ac, av);
//	index = 0;
//	while (index < ac)
//	{
//		printf("%d\n", index);
//		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
//		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
//		printf("\t|     size : %d\n", structs[index].size);
//		index++;
//	}
//}
