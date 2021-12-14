/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:42:48 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/13 17:47:05 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = (char *)malloc(i + 1);
	if (!dest)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//int main()
//{
//    char *ded = "iloveyou";
//    char *hmm;
//    hmm = ft_strdup(ded);
//    printf("%s", hmm);
//}
