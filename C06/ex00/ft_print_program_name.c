/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:56:56 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/07 22:30:00 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = (argc - argc);
	while (argv[j][i] != '\0')
	{
		write(1, &argv[j][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
