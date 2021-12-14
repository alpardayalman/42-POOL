/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 03:32:00 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/14 04:05:48 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void	printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	putnbr(int i)
{
	if (i > 9)
		putnbr(i/=10);
	write(1, &"0123456789"[i % 10], 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i++].str != 0)
	{
		printstr(par[i].str);
		putnbr(par[i].size);
		printstr("");
		printstr(par[i].copy);
	}
}

int					main(void)
{
	int					index;
	int					ac;
	char				**av;
	struct s_stock_str	*structs;

	ac = 10;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	index = 0;
	while (index < ac)
	{
		av[index] = (char *)malloc((2 + 1) * sizeof(char));
		av[index][0] = 'x';
		av[index][1] = (char)(index + 'a');
		av[index][2] = '\0';
		index++;
	}
	structs = ft_strs_to_tab(ac, av);
	index = 0;
	while (index < ac)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
	printf("---- SHOW TAB\n");
	ft_show_tab(structs);
}
