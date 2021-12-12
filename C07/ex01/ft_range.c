

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int range;
    int i;
    int *me;
    if(min >= max)
    {
        return  me = NULL;
    }
    i = 0;
    range = max - min;
    me = (int*)malloc(range * sizeof(int));
    if (!me)
        return (0);
    
    while (min < max)
    {
        me[i] = min ;
        min++;
        i++;
    }
    return me;
}

int main()
{
    int *array;
    int loop = 0;
    array = ft_range(-50, 100);
    while (loop <= 200)
    {
            printf("%d ", array[loop]);
            loop++;
    }
    
}