#include "libft.h"

char* ft_toupper(char * str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        str++;
    }

    return (str);
}
