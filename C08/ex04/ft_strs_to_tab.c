#include "ft_stock_str.h"
#include <stdlib.h>

int strlen(char *src)
{
    int i = 0;
    while (src[i])
    {
        i++;
    }
    return i;
}
char    *ft_strdup(char *src)
{
    int i;
    i = 0;
    while (src[i])
    {
        i++;
    }
    char *dest;
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
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *t;
    
}