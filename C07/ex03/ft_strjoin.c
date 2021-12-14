/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:20:44 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/13 23:16:46 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	dest = malloc (sizeof (strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dest[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
//int main()
//{
//    char *mychar[] = {"arda", "sarp", "fatih"};
//	printf("%s$\n", ft_strjoin(3 ,mychar, "---"));
//}
