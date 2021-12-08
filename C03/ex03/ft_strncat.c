/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:38:25 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/04 23:44:14 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	size = ft_get_len(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[i + size] = src[i];
		i++;
	}
	dest[i + size] = '\0';
	return (dest);
}
