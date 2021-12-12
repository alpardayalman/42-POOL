

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range,int min,int max)
{
    int len;
    int i;
    if(min >= max)
    {
        *range = NULL;
        return  0;
    }
    i = 0;
    len = max - min;
    *range = (int*)malloc(len * sizeof(int));
    
    if (!*range)
        return (-1);
    
    while (min < max)
    {
       (*range)[i] = min ;
        min++;
        i++;
    }
    return len;
}

int main()
{
    int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = -5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}    
}
