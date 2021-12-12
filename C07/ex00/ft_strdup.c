
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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

int main()
{
    char *ded = "iloveyou";
    char *hmm;
    hmm = ft_strdup(ded);
    printf("%s", hmm);
}