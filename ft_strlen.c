
#include <stdlib.h>

size_t  ft_strlen(char *s)
{
    size_t i;

    if (!s)
        return(0);
    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}