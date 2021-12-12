

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	dest = malloc(j + 1);
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, strs[i]);
		j += ft_strlen(strs[i]);
		i++;
		if (i < size)
		{
			ft_strcpy(dest + j, sep);
			j += ft_strlen(sep);
		}
	}
	dest[j] = '\0';
	return (dest);
}

int main()
{
    char *mychar[] = {"arda", "sarp", "fatih"};
	printf("%s$\n", ft_strjoin(3 ,mychar, "---"));
}
