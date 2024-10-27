#include "libft.h"

// First occurence
char * ft_strchr(const char *str, int ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return ((char *)str);
        }
        str++;
    }
    if (ch == '\0')
    {
        return ((char *)str); 
    }
    return (NULL);
}
