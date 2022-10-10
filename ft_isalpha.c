#include <stdio.h>


size_t  ft_strlen(char *s);


int ft_isalpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return(1);
    if (c >= 'A' && c <= 'Z')
        return(1);
    else
        return(0); 
}


int main()
{
    char    c;
    size_t  len;
    char *str = "HEllo!";

    len = ft_strlen(str);

    c='B';
    if (ft_isalpha(c))
        printf("works!");
    else
        printf("doesn't!");
    return(0);
} 
